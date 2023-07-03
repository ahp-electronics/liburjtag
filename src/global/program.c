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


int32_t program_jtag(int32_t fd, const char *drivername, const char *bsdl_path, int64_t frequency, int32_t device_n)
{
    int ret = 1, err = 0;
    urj_chain_t *chain;
    urj_part_t *part;
    const urj_cable_driver_t *driver;
    FILE *svf = fdopen(fd, "r");
    err = (svf == NULL);
    if(err) return ENOENT;
    chain = urj_tap_chain_alloc ();
    chain->active_part = device_n;
    if(bsdl_path != NULL)
        urj_bsdl_set_path (chain, bsdl_path);
    driver = urj_tap_cable_find (drivername);
    int ntries = 5;
    urj_cable_t *cable = urj_tap_cable_usb_connect (chain, driver, NULL);
    while(ntries-- > 0) {
        urj_tap_cable_set_frequency (cable, frequency);
        err = urj_tap_detect(chain, 0);
        if(err) continue;
        part = urj_tap_chain_active_part (chain);
        err = (part == NULL);
        if(err) continue;
        err = urj_svf_run (chain, svf, 0, frequency);
        if(err) continue;
        ret = err;
        break;
    }
    fclose (svf);
    urj_tap_chain_free(chain);
    return ret;
}
