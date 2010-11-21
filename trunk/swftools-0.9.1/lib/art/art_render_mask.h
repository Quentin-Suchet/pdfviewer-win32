/*
 * art_render_mask.h: Alpha mask source for modular rendering.
 *
 * Libart_LGPL - library of basic graphic primitives
 * Copyright (C) 2000 Raph Levien
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Authors: Raph Levien <raph@acm.org>
 */

#ifndef __ART_RENDER_MASK_H__
#define __ART_RENDER_MASK_H__

#ifdef LIBART_COMPILATION
#include "art_render.h"
#else
#include "art_render.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void
art_render_mask (ArtRender *render,
		 int x0, int y0, int x1, int y1,
		 const art_u8 *mask_buf, int rowstride);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __ART_RENDER_MASK_H__ */