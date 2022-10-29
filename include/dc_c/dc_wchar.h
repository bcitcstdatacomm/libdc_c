#ifndef LIBDC_C_DC_WCHAR_H
#define LIBDC_C_DC_WCHAR_H


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
#include <stdio.h>
#include <stdarg.h>
#include <wchar.h>


#ifdef __cplusplus
extern "C" {
#endif


wint_t dc_btowc(const struct dc_env *env, int c);
wint_t dc_fgetwc(const struct dc_env *env, struct dc_error *err, FILE *stream);
wchar_t *dc_fgetws(const struct dc_env *env, struct dc_error *err, wchar_t *restrict ws, int n, FILE *restrict stream);
wint_t dc_fputwc(const struct dc_env *env, struct dc_error *err, wchar_t wc, FILE *stream);
int dc_fputws(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict ws, FILE *restrict stream);
int dc_fwide(const struct dc_env *env, struct dc_error *err, FILE *stream, int mode);
wint_t dc_getwc(const struct dc_env *env, struct dc_error *err, FILE *stream);
wint_t dc_getwchar(const struct dc_env *env, struct dc_error *err);
size_t dc_mbrlen(const struct dc_env *env, struct dc_error *err, const char *restrict s, size_t n, mbstate_t *restrict ps);
size_t dc_mbrtowc(const struct dc_env *env, struct dc_error *err, wchar_t *restrict pwc, const char *restrict s, size_t n, mbstate_t *restrict ps);
int dc_mbsinit(const struct dc_env *env, const mbstate_t *ps);
size_t dc_mbsrtowcs(const struct dc_env *env, struct dc_error *err, wchar_t *restrict dst, const char **restrict src, size_t len, mbstate_t *restrict ps);
wint_t dc_putwc(const struct dc_env *env, struct dc_error *err, wchar_t wc, FILE *stream);
wint_t dc_putwchar(const struct dc_env *env, struct dc_error *err, wchar_t wc);
wint_t dc_ungetwc(const struct dc_env *env, struct dc_error *err, wint_t wc, FILE *stream);
int dc_vfwprintf(const struct dc_env *env, FILE *restrict stream, const wchar_t *restrict format, va_list arg);
int dc_vfwscanf(const struct dc_env *env, struct dc_error *err, FILE *restrict stream, const wchar_t *restrict format, va_list arg);
int dc_vswprintf(const struct dc_env *env, struct dc_error *err, wchar_t *restrict ws, size_t n, const wchar_t *restrict format, va_list arg);
int dc_vswscanf(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict ws, const wchar_t *restrict format, va_list arg);
int dc_vwprintf(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict format, va_list arg);
int dc_vwscanf(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict format, va_list arg);
size_t dc_wcrtomb(const struct dc_env *env, struct dc_error *err, char *restrict s, wchar_t wc, mbstate_t *restrict ps);
wchar_t *dc_wcscat(const struct dc_env *env, wchar_t *restrict ws1, const wchar_t *restrict ws2);
wchar_t *dc_wcschr(const struct dc_env *env, const wchar_t *ws, wchar_t wc);
int dc_wcscmp(const struct dc_env *env, const wchar_t *ws1, const wchar_t *ws2);
int dc_wcscoll(const struct dc_env *env, struct dc_error *err, const wchar_t *ws1, const wchar_t *ws2);
wchar_t *dc_wcscpy(const struct dc_env *env, wchar_t *restrict ws1, const wchar_t *restrict ws2);
size_t dc_wcscspn(const struct dc_env *env, const wchar_t *ws1, const wchar_t *ws2);
size_t dc_wcsftime(const struct dc_env *env, wchar_t *restrict wcs, size_t maxsize, const wchar_t *restrict format, const struct tm *restrict timeptr);
size_t dc_wcslen(const struct dc_env *env, const wchar_t *ws);
wchar_t *dc_wcsncat(const struct dc_env *env, wchar_t *restrict ws1, const wchar_t *restrict ws2, size_t n);
int dc_wcsncmp(const struct dc_env *env, const wchar_t *ws1, const wchar_t *ws2, size_t n);
wchar_t *dc_wcsncpy(const struct dc_env *env, wchar_t *restrict ws1, const wchar_t *restrict ws2, size_t n);
wchar_t *dc_wcspbrk(const struct dc_env *env, const wchar_t *ws1, const wchar_t *ws2);
wchar_t *dc_wcsrchr(const struct dc_env *env, const wchar_t *ws, wchar_t wc);
size_t dc_wcsrtombs(const struct dc_env *env, struct dc_error *err, char *restrict dst, const wchar_t **restrict src, size_t len, mbstate_t *restrict ps);
size_t dc_wcsspn(const struct dc_env *env, const wchar_t *ws1, const wchar_t *ws2);
wchar_t *dc_wcsstr(const struct dc_env *env, const wchar_t *restrict ws1, const wchar_t *restrict ws2);
double dc_wcstod(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict nptr, wchar_t **restrict endptr);
float dc_wcstof(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict nptr, wchar_t **restrict endptr);
wchar_t *dc_wcstok(const struct dc_env *env, wchar_t *restrict ws1, const wchar_t *restrict ws2, wchar_t **restrict ptr);
long dc_wcstol(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict nptr, wchar_t **restrict endptr, int base);
long double dc_wcstold(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict nptr, wchar_t **restrict endptr);
long long dc_wcstoll(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict nptr, wchar_t **restrict endptr, int base);
unsigned long dc_wcstoul(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict nptr, wchar_t **restrict endptr, int base);
unsigned long long dc_wcstoull(const struct dc_env *env, struct dc_error *err, const wchar_t *restrict nptr, wchar_t **restrict endptr, int base);
size_t dc_wcsxfrm(const struct dc_env *env, struct dc_error *err, wchar_t *restrict ws1, const wchar_t *restrict ws2, size_t n);
int dc_wctob(const struct dc_env *env, wint_t c);
wchar_t *dc_wmemchr(const struct dc_env *env, const wchar_t *ws, wchar_t wc, size_t n);
int dc_wmemcmp(const struct dc_env *env, const wchar_t *ws1, const wchar_t *ws2, size_t n);
wchar_t *dc_wmemcpy(const struct dc_env *env, wchar_t *restrict ws1, const wchar_t *restrict ws2, size_t n);
wchar_t *dc_wmemmove(const struct dc_env *env, wchar_t *ws1, const wchar_t *ws2, size_t n);
wchar_t *dc_wmemset(const struct dc_env *env, wchar_t *ws, wchar_t wc, size_t n);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_C_DC_WCHAR_H
