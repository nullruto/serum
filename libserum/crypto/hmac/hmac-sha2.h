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

#ifndef __LS_CRYPTO_HMAC_SHA2_H
#define __LS_CRYPTO_HMAC_SHA2_H


#include "../../core/stdincl.h"
#include "../hashing/sha2.h"


#ifdef __cplusplus
extern "C" {
#endif

	LSAPI ls_result_t ls_hmac_sha2_224(const void *const LS_RESTRICT data, const size_t data_size, const void *const LS_RESTRICT key, const size_t key_size, ls_sha2_224_digest_t digest);
	LSAPI ls_result_t ls_hmac_sha2_256(const void *const LS_RESTRICT data, const size_t data_size, const void *const LS_RESTRICT key, const size_t key_size, ls_sha2_256_digest_t digest);
	LSAPI ls_result_t ls_hmac_sha2_384(const void *const LS_RESTRICT data, const size_t data_size, const void *const LS_RESTRICT key, const size_t key_size, ls_sha2_384_digest_t digest);
	LSAPI ls_result_t ls_hmac_sha2_512(const void *const LS_RESTRICT data, const size_t data_size, const void *const LS_RESTRICT key, const size_t key_size, ls_sha2_512_digest_t digest);

#ifdef __cplusplus
}
#endif


#endif

