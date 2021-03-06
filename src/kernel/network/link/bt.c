/*
 * SpiderpigOS
 * Copyright (C) 2009 - 2010 Davide Gessa
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * \file kernel/network/link/bt.c
 * \author Davide Gessa
 * \date 02-4-2010
 */
#include <network/network.h>
#include <network/packet.h>
#include <network/net/ipv4.h>
#include <network/link/bt.h>


netlink_t bt_linkproto =
{
	.frame_min_size = 72,
	.frame_max_size = 1500,
	.header_size = sizeof(bt_header_t),
	
	.up = bt_up,
	.down = bt_down,
	.handle_frame = bt_handle_frame,
	.send_frame = NULL
};



/**
 * Gestisce un frame
 */
uint32_t bt_handle_frame(network_iface_t *iface, packet_t *p)
{
	
	
	return 0;
}



/**
 * Abilita l'interfaccia
 */
uint32_t bt_up(network_iface_t *iface)
{
	
}



/**
 * Disabilita l'interfaccia
 */
uint32_t bt_down(network_iface_t *iface)
{
	
}

