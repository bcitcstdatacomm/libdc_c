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


#include "dc_c/dc_stdlib.h"
//#include "dc_string.h"
//#include <errno.h>
//#include <unistd.h>


void dc__Exit(const struct dc_env *env, int status)
{
    DC_TRACE(env);
    errno = 0;
    _Exit(status);
}

_Noreturn void dc_abort(const struct dc_env *env)
{
    DC_TRACE(env);
    errno = 0;
    abort();
}

int dc_abs(const struct dc_env *env, __attribute__((unused)) struct dc_error *err, int i)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;

    // TODO: handle if INT_MIN not working
    ret_val = abs(i);

    return ret_val;
}

int dc_atexit(const struct dc_env *env, struct dc_error *err, void (*func)(void))
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;

    ret_val = atexit(func);

    if(ret_val != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

void *dc_bsearch(const struct dc_env *env,
                 const void                *key,
                 const void                *base,
                 size_t                     nel,
                 size_t                     width,
                 int (*compar)(const void *, const void *))
{
    void *ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = bsearch(key, base, nel, width, compar);

    return ret_val;
}

void *dc_calloc(const struct dc_env *env, struct dc_error *err, size_t nelem, size_t elsize)
{
    void *memory;

    DC_TRACE(env);
    errno  = 0;
    memory = calloc(nelem, elsize);

    if(memory == NULL)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return memory;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"
div_t dc_div(const struct dc_env *env, int numer, int denom)
{
    div_t ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = div(numer, denom);

    return ret_val;
}
#pragma GCC diagnostic pop

_Noreturn void dc_exit(const struct dc_env *env, int status)
{
    DC_TRACE(env);
    errno = 0;
    exit(status);
}

void dc_free(const struct dc_env *env, void *ptr)
{
    DC_TRACE(env);
    errno = 0;
    free(ptr);
}

char *dc_getenv(const struct dc_env *env, const char *name)
{
    char *ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = getenv(name);

    return ret_val;
}

long dc_labs(const struct dc_env *env, __attribute__((unused)) struct dc_error *err, long i)
{
    long ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = labs(i);

    // TODO: handle the case that i can't be handled

    return ret_val;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"
ldiv_t dc_ldiv(const struct dc_env *env, long numer, long denom)
{
    ldiv_t ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = ldiv(numer, denom);

    return ret_val;
}
#pragma GCC diagnostic pop

long long dc_llabs(const struct dc_env *env, __attribute__((unused)) struct dc_error *err, long long i)
{
    long long ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = llabs(i);

    // TODO: handle if i cannot be represented

    return ret_val;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Waggregate-return"
lldiv_t dc_lldiv(const struct dc_env *env, long long numer, long long denom)
{
    lldiv_t ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = lldiv(numer, denom);

    return ret_val;
}
#pragma GCC diagnostic pop

void *dc_malloc(const struct dc_env *env, struct dc_error *err, size_t size)
{
    void *memory;

    DC_TRACE(env);
    errno  = 0;
    memory = malloc(size);

    if(memory == NULL)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return memory;
}

int dc_mblen(const struct dc_env *env, struct dc_error *err, const char *s, size_t n)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mblen(s, n);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

size_t dc_mbstowcs(const struct dc_env *env,
                   struct dc_error           *err,
                   wchar_t * restrict pwcs,
                   const char * restrict s,
                   size_t n)
{
    size_t ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mbstowcs(pwcs, s, n);

    if(ret_val == (size_t)-1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int dc_mbtowc(const struct dc_env *env,
              struct dc_error           *err,
              wchar_t * restrict pwc,
              const char * restrict s,
              size_t n)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = mbtowc(pwc, s, n);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

void dc_qsort(const struct dc_env *env,
              void                      *base,
              size_t                     nel,
              size_t                     width,
              int (*compar)(const void *, const void *))
{
    DC_TRACE(env);
    errno = 0;
    qsort(base, nel, width, compar);
}

int dc_rand(const struct dc_env *env)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = rand();   // NOLINT(cert-msc30-c,cert-msc50-cpp)

    return ret_val;
}

void *dc_realloc(const struct dc_env *env, struct dc_error *err, void *ptr, size_t size)
{
    void *memory;

    DC_TRACE(env);
    errno  = 0;
    memory = realloc(ptr, size);

    if(memory == NULL)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return memory;
}

void dc_srand(const struct dc_env *env, unsigned seed)
{
    DC_TRACE(env);
    errno = 0;
    srand(seed);
}

double
dc_strtod(const struct dc_env *env, struct dc_error *err, const char * restrict nptr, char ** restrict endptr)
{
    double ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = strtod(nptr, endptr);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_strtof(const struct dc_env *env,
                struct dc_error           *err,
                const char * restrict nptr,
                char ** restrict endptr)
{
    float ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = strtof(nptr, endptr);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long dc_strtol(const struct dc_env *env,
               struct dc_error           *err,
               const char * restrict nptr,
               char ** restrict endptr,
               int base)
{
    long ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = strtol(nptr, endptr, base);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double
dc_strtold(const struct dc_env *env, struct dc_error *err, const char * restrict nptr, char ** restrict endptr)
{
    long double ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = strtold(nptr, endptr);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long long dc_strtoll(const struct dc_env *env,
                     struct dc_error           *err,
                     const char * restrict nptr,
                     char ** restrict endptr,
                     int base)
{
    long long ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = strtoll(nptr, endptr, base);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

unsigned long dc_strtoul(const struct dc_env *env,
                         struct dc_error           *err,
                         const char * restrict str,
                         char ** restrict endptr,
                         int base)
{
    unsigned long ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = strtoul(str, endptr, base);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

unsigned long long dc_strtoull(const struct dc_env *env,
                               struct dc_error           *err,
                               const char * restrict str,
                               char ** restrict endptr,
                               int base)
{
    unsigned long long ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = strtoull(str, endptr, base);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int dc_system(const struct dc_env *env, struct dc_error *err, const char *command)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = system(command);  // NOLINT(cert-env33-c)

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

size_t dc_wcstombs(const struct dc_env *env,
                   struct dc_error           *err,
                   char * restrict s,
                   const wchar_t * restrict pwcs,
                   size_t n)
{
    size_t ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = wcstombs(s, pwcs, n);

    if(ret_val == (size_t)-1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int dc_wctomb(const struct dc_env *env, struct dc_error *err, char *s, wchar_t wchar)
{
    int ret_val;

    DC_TRACE(env);
    errno   = 0;
    ret_val = wctomb(s, wchar);

    if(ret_val == -1)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}
