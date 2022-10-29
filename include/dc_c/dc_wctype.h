#ifndef LIBDC_C_DC_WCTYPE_H
#define LIBDC_C_DC_WCTYPE_H


/*
 * Copyright 2022-2022 D'Arcy Smith.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <dc_env/env.h>
#include <wctype.h>


#ifdef __cplusplus
extern "C" {
#endif


int dc_iswalnum(const struct dc_env *env, wint_t wc);
int dc_iswalpha(const struct dc_env *env, wint_t wc);
int dc_iswblank(const struct dc_env *env, wint_t wc);
int dc_iswcntrl(const struct dc_env *env, wint_t wc);
int dc_iswctype(const struct dc_env *env, wint_t wc, wctype_t charclass);
int dc_iswdigit(const struct dc_env *env, wint_t wc);
int dc_iswgraph(const struct dc_env *env, wint_t wc);
int dc_iswlower(const struct dc_env *env, wint_t wc);
int dc_iswprint(const struct dc_env *env, wint_t wc);
int dc_iswpunct(const struct dc_env *env, wint_t wc);
int dc_iswspace(const struct dc_env *env, wint_t wc);
int dc_iswupper(const struct dc_env *env, wint_t wc);
int dc_iswxdigit(const struct dc_env *env, wint_t wc);
wint_t dc_towctrans(const struct dc_env *env, struct dc_error *err, wint_t wc, wctrans_t desc);
wint_t dc_towlower(const struct dc_env *env, wint_t wc);
wint_t dc_towupper(const struct dc_env *env, wint_t wc);
wctrans_t dc_wctrans(const struct dc_env *env, struct dc_error *err, const char *charclass);
wctype_t dc_wctype(const struct dc_env *env, struct dc_error *err, const char *property);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_C_DC_WCTYPE_H
