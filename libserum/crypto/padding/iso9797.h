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

#ifndef __LS_CRYPTO_PADDING_ISO9797_H
#define __LS_CRYPTO_PADDING_ISO9797_H


//#include <stdint.h>
#include <stdlib.h>

#include "../../core/lsapi.h"
#include "../../core/result.h"
#include "../../core/math.h"


#ifdef __cplusplus
extern "C" {
#endif

#	define ls_pad_iso9797_size(bsz, isz)	LS_MATH_ROUND_BLOCK((bsz), (isz))
	LSAPI ls_result_t ls_pad_iso9797_zero(void *out, void *in, const size_t inputsz, const size_t outputsz);
	LSAPI ls_result_t ls_pad_iso9797(void *out, void *in, const size_t inputsz, const size_t outputsz);

#ifdef __cplusplus
}
#endif


#endif
