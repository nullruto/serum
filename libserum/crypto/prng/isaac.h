/*******************************************************************************
**                                                                            **
**   The MIT License                                                          **
**                                                                            **
**   Copyright 2017 icecubetray                                               **
**                                                                            **
**   Permission is hereby granted, free of charge, to any person              **
**   obtaining a copy of this software and associated documentation files     **
**   (the "Software"), to deal in the Software without restriction,           **
**   including without limitation the rights to use, copy, modify, merge,     **
**   publish, distribute, sublicense, and/or sell copies of the Software,     **
**   and to permit persons to whom the Software is furnished to do so,        **
**   subject to the following conditions:                                     **
**                                                                            **
**   The above copyright notice and this permission notice shall be           **
**   included in all copies or substantial portions of the Software.          **
**                                                                            **
**   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,          **
**   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF       **
**   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   **
**   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY     **
**   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,     **
**   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE        **
**   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                   **
**                                                                            **
********************************************************************************
**
**  Notes:
**    -
**
*/

#ifndef __LS_CRYPTO_PRNG_ISAAC_H
#define __LS_CRYPTO_PRNG_ISAAC_H


#include "../../core/stdincl.h"
#include "./device.h"


#define LS_CRYPTO_PRNG_ISAAC_SIZEL			(8U)
#define LS_CRYPTO_PRNG_ISAAC_SIZE			(1 << LS_CRYPTO_PRNG_ISAAC_SIZEL)


typedef struct ls_isaac {
	uint32_t a, b, c;
	uint32_t count;
	uint32_t rsl[LS_CRYPTO_PRNG_ISAAC_SIZE];
	uint32_t mem[LS_CRYPTO_PRNG_ISAAC_SIZE];
} ls_isaac_t;


#ifdef __cplusplus
extern "C" {
#endif

	LSAPI ls_result_t ls_isaac_init_ex(ls_isaac_t *const LS_RESTRICT ctx, const void *const LS_RESTRICT seed, const size_t size);
	LSAPI ls_result_t ls_isaac_init(ls_isaac_t *const ctx);
	LSAPI ls_result_t ls_isaac_init_device(ls_isaac_t *const LS_RESTRICT ctx, const ls_device_t *const LS_RESTRICT device);
	LSAPI ls_result_t ls_isaac_clear(ls_isaac_t *const ctx);

	LSAPI ls_result_t ls_isaac_update(ls_isaac_t *const ctx);

	LSAPI uint32_t ls_isaac(ls_isaac_t *const ctx);

#if DEBUG
	LSAPI ls_result_t ls_isaac_test();
#endif

#ifdef __cplusplus
}
#endif


#endif
