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

int32_t program_jtag(int32_t fd, const char *drivername, const char *bsdl_path, int64_t frequency)
{
    int32_t ret = 1;
    if(fd < 0)
        return ret;
    urj_chain_t *chain;
    const urj_cable_driver_t *driver;
    chain = urj_tap_chain_alloc ();
    if(bsdl_path != NULL)
        urj_bsdl_set_path (chain, bsdl_path);
    driver = urj_tap_cable_find (drivername);
    urj_cable_t *cable = urj_tap_cable_usb_connect (chain, driver, NULL);
    urj_tap_cable_set_frequency (cable, frequency);
    int32_t err = urj_tap_detect(chain, 0);
    if(err == URJ_STATUS_OK) {
        FILE *svf = fdopen(fd, "r");
        if(svf != NULL) {
            err = urj_svf_run (chain, svf, 1, frequency);
            if(err == URJ_STATUS_OK)
                ret = 0;
            fclose (svf);
        }
    }
    urj_tap_chain_free(chain);
    return ret;
}

