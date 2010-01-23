/*
 * $Id: buses.h 1687 2009-12-29 23:53:09Z arniml $
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

#ifdef ENABLE_LOWLEVEL_DIRECT
_URJ_LIST(direct_parport)
#endif

#ifdef ENABLE_LOWLEVEL_PPDEV
_URJ_LIST(ppdev_parport)
#endif

#ifdef ENABLE_LOWLEVEL_PPI
_URJ_LIST(ppi_parport)
#endif

#undef _URJ_LIST