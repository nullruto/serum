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

#ifndef __LS_CRYPTO_KDF_PBKDF2_SHA2_H
#define __LS_CRYPTO_KDF_PBKDF2_SHA2_H


#include "../../core/stdincl.h"


#ifdef __cplusplus
extern "C" {
#endif

	LSAPI ls_result_t ls_pbkdf2_sha2_224(uint8_t *const out, const size_t out_size, const char *const LS_RESTRICT pass, const size_t pass_size, const char *const LS_RESTRICT salt, const size_t salt_size, const ls_nword_t rounds);
	LSAPI ls_result_t ls_pbkdf2_sha2_256(uint8_t *const out, const size_t out_size, const char *const LS_RESTRICT pass, const size_t pass_size, const char *const LS_RESTRICT salt, const size_t salt_size, const ls_nword_t rounds);
	LSAPI ls_result_t ls_pbkdf2_sha2_384(uint8_t *const out, const size_t out_size, const char *const LS_RESTRICT pass, const size_t pass_size, const char *const LS_RESTRICT salt, const size_t salt_size, const ls_nword_t rounds);
	LSAPI ls_result_t ls_pbkdf2_sha2_512(uint8_t *const out, const size_t out_size, const char *const LS_RESTRICT pass, const size_t pass_size, const char *const LS_RESTRICT salt, const size_t salt_size, const ls_nword_t rounds);

#ifdef __cplusplus
}
#endif


#endif
