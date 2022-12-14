#ifndef LIBDC_C_DC_STDLIB_H
#define LIBDC_C_DC_STDLIB_H


/*
 * Copyright 2021-2022 D'Arcy Smith.
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
#include <stdlib.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param status
 */
_Noreturn void dc__Exit(const struct dc_env *env, int status);

/**
 *
 * @param env
 */
_Noreturn void dc_abort(const struct dc_env *env);

/**
 *
 * @param env
 * @param err
 * @param i
 * @return
 */
int dc_abs(const struct dc_env *env, struct dc_error *err, int i);

/**
 *
 * @param env
 * @param err
 * @param func
 * @return
 */
int dc_atexit(const struct dc_env *env, struct dc_error *err,
              void (*func)(void));

/**
 *
 * @param env
 * @param key
 * @param base
 * @param nel
 * @param width
 * @param compar
 * @return
 */
void *dc_bsearch(const struct dc_env *env, const void *key,
                 const void *base, size_t nel, size_t width,
                 int (*compar)(const void *, const void *));

/**
 *
 * @param env
 * @param err
 * @param nelem
 * @param elsize
 * @return
 */
void *dc_calloc(const struct dc_env *env, struct dc_error *err,
                size_t nelem, size_t elsize);

/**
 *
 * @param env
 * @param numer
 * @param denom
 * @return
 */
div_t dc_div(const struct dc_env *env, int numer, int denom);

/**
 *
 * @param env
 * @param status
 */
_Noreturn void dc_exit(const struct dc_env *env, int status);

/**
 *
 * @param env
 * @param ptr
 */
void dc_free(const struct dc_env *env, void *ptr);

/**
 *
 * @param env
 * @param name
 * @return
 */
char *dc_getenv(const struct dc_env *env, const char *name);

/**
 *
 * @param env
 * @param err
 * @param i
 * @return
 */
long dc_labs(const struct dc_env *env, struct dc_error *err, long i);

/**
 *
 * @param env
 * @param numer
 * @param denom
 * @return
 */
ldiv_t dc_ldiv(const struct dc_env *env, long numer, long denom);

/**
 *
 * @param env
 * @param err
 * @param i
 * @return
 */
long long dc_llabs(const struct dc_env *env, struct dc_error *err,
                   long long i);

/**
 *
 * @param env
 * @param numer
 * @param denom
 * @return
 */
lldiv_t dc_lldiv(const struct dc_env *env, long long numer,
                 long long denom);

/**
 *
 * @param env
 * @param err
 * @param size
 * @return
 */
void *dc_malloc(const struct dc_env *env, struct dc_error *err,
                size_t size);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param n
 * @return
 */
int dc_mblen(const struct dc_env *env, struct dc_error *err,
             const char *s, size_t n);

/**
 *
 * @param env
 * @param err
 * @param pwcs
 * @param s
 * @param n
 * @return
 */
size_t dc_mbstowcs(const struct dc_env *env, struct dc_error *err,
                   wchar_t *restrict pwcs, const char *restrict s, size_t n);

/**
 *
 * @param env
 * @param err
 * @param pwc
 * @param s
 * @param n
 * @return
 */
int dc_mbtowc(const struct dc_env *env, struct dc_error *err,
              wchar_t *restrict pwc, const char *restrict s, size_t n);

/**
 *
 * @param env
 * @param base
 * @param nel
 * @param width
 * @param compar
 */
void dc_qsort(const struct dc_env *env, void *base, size_t nel,
              size_t width, int (*compar)(const void *, const void *));

/**
 *
 * @param env
 * @param err
 * @param ptr
 * @param size
 * @return
 */
void *dc_realloc(const struct dc_env *env, struct dc_error *err,
                 void *ptr, size_t size);

/**
 *
 * @param env
 * @param err
 * @param nptr
 * @param endptr
 * @return
 */
double dc_strtod(const struct dc_env *env, struct dc_error *err,
                 const char *restrict nptr, char **restrict endptr);

/**
 *
 * @param env
 * @param err
 * @param nptr
 * @param endptr
 * @return
 */
float dc_strtof(const struct dc_env *env, struct dc_error *err,
                const char *restrict nptr, char **restrict endptr);

/**
 *
 * @param env
 * @param err
 * @param nptr
 * @param endptr
 * @param base
 * @return
 */
long dc_strtol(const struct dc_env *env, struct dc_error *err,
               const char *restrict nptr, char **restrict endptr, int base);

/**
 *
 * @param env
 * @param err
 * @param nptr
 * @param endptr
 * @return
 */
long double dc_strtold(const struct dc_env *env, struct dc_error *err,
                       const char *restrict nptr, char **restrict endptr);

/**
 *
 * @param env
 * @param err
 * @param nptr
 * @param endptr
 * @param base
 * @return
 */
long long dc_strtoll(const struct dc_env *env, struct dc_error *err,
                     const char *restrict nptr, char **restrict endptr,
                     int base);

/**
 *
 * @param env
 * @param err
 * @param str
 * @param endptr
 * @param base
 * @return
 */
unsigned long dc_strtoul(const struct dc_env *env, struct dc_error *err,
                         const char *restrict str, char **restrict endptr,
                         int base);

/**
 *
 * @param env
 * @param err
 * @param str
 * @param endptr
 * @param base
 * @return
 */
unsigned long long dc_strtoull(const struct dc_env *env,
                               struct dc_error *err, const char *restrict str,
                               char **restrict endptr, int base);

/**
 *
 * @param env
 * @param err
 * @param command
 * @return
 */
int dc_system(const struct dc_env *env, struct dc_error *err,
              const char *command);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param pwcs
 * @param n
 * @return
 */
size_t dc_wcstombs(const struct dc_env *env, struct dc_error *err,
                   char *restrict s, const wchar_t *restrict pwcs, size_t n);

/**
 *
 * @param env
 * @param err
 * @param s
 * @param wchar
 * @return
 */
int dc_wctomb(const struct dc_env *env, struct dc_error *err, char *s,
              wchar_t wchar);


#ifdef __cplusplus
}
#endif


// obsolete
// int dc_rand(const struct dc_env *env);
// void dc_srand(const struct dc_env *env, unsigned seed);

// better functions
// double dc_atof(const char *);
// int dc_atoi(const char *);
// long dc_atol(const char *);
// long long dc_atoll(const char *);


#endif // LIBDC_C_DC_STDLIB_H
