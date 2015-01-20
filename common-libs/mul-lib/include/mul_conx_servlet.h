/*
 *  mul_conx_servlet.h: MUL ConX service headers
 *  Copyright (C) 2012, Dipjyoti Saikia <dipjyoti.saikia@gmail.com>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef __MUL_CONX_SERVLET_H__
#define __MUL_CONX_SERVLET_H__

int mul_conx_mod_uflow(void *service,
                   bool add,
                   size_t n_dpid,
                   uint64_t *src_dps,
                   uint64_t dst_dp,
                   struct flow *in_fl,
                   struct flow *in_mask,
                   uint32_t tunnel_key,
                   uint32_t tunnel_type,
                   void *actions,
                   size_t action_len,
                   uint64_t fl_flags,
                   uint32_t conx_flags);

int mul_conx_stale(void *service, uint32_t cookie);

#endif
