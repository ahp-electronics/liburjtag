/*
 * fclock.c
 *
 * Copyright (C) 2005 Hein Roehrig
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
 */

#define _ISOC99_SOURCE
#define _POSIX_C_SOURCE 200112L
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>
#include <assert.h>

#include <urjtag/fclock.h>

/* ------------------------------------------------------------------ */

long double
urj_lib_frealtime (void)
{
    long double result;

    struct timeval now;
    gettimeofday(&now, NULL);
    result = (long double) now.tv_sec + now.tv_usec * (long double) 1e-6;

    assert (isnormal (result));
    assert (result > 0);
    return result;
}
