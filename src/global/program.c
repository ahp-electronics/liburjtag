/*
 * $Id$
 *
 * Copyright (C) 2003 ETC s.r.o.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Written by Marcel Telka <marcel@telka.sk>, 2003.
 *
 */

#include <sysdep.h>

#include <stdlib.h>
#include <string.h>

#include <urjtag.h>


int32_t program_jtag(const char *svf_path, const char *drivername, const char *bsdl_path, int64_t frequency)
{
    int ret = 1, err = 0;
    urj_chain_t *chain;
    urj_part_t *part;
    const urj_cable_driver_t *driver;
    FILE *svf = fopen(svf_path, "r");
    err = (svf == NULL);
    if(err) return ENOENT;
    chain = urj_tap_chain_alloc ();
    err = (chain == NULL);
    if(err) return ENOENT;
    if(bsdl_path != NULL)
        urj_bsdl_set_path (chain, bsdl_path);
    driver = urj_tap_cable_find (drivername);
    urj_cable_t *cable = urj_tap_cable_usb_connect (chain, driver, NULL);
    urj_tap_cable_set_frequency (cable, frequency);
    err = urj_tap_detect(chain, 0);
    if(err) return ENODEV;
    part = urj_tap_chain_active_part (chain);
    err = (part == NULL);
    if(err) return ENODEV;
    err = urj_svf_run (chain, svf, 0, frequency);
    if(err) return ENODEV;
    ret = err;
    fclose (svf);
    urj_tap_chain_free(chain);
    return ret;
}
