/* alloc.h - Memory allocation for PowerVM, KVM on Power, and i386 */
/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2023  Free Software Foundation, Inc.
 *  Copyright (C) 2023  IBM Corporation
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GRUB_IEEE1275_ALLOC_HEADER
#define GRUB_IEEE1275_ALLOC_HEADER	1

#include <grub/memory.h>

struct regions_claim_request {
  unsigned int flags;     /* GRUB_MM_ADD_REGION_(NONE|CONSECUTIVE) */
  grub_uint32_t total;    /* number of requested bytes */
};

#endif /* GRUB_IEEE1275_ALLOC_HEADER */
