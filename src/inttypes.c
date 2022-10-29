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


#include "dc_c/dc_inttypes.h"


intmax_t dc_imaxabs(const struct dc_env *env, intmax_t j)
{
    intmax_t value;

    DC_TRACE(env);
    errno = 0;
    value = imaxabs(j);

    return value;
}

imaxdiv_t dc_imaxdiv(const struct dc_env *env,intmax_t numer, intmax_t denom)
{
    imaxdiv_t value;

    DC_TRACE(env);
    errno = 0;
    value = imaxdiv(numer, denom);

    return value;
}

intmax_t dc_strtoimax(const struct dc_env *env,
                      struct dc_error *err,
                      const char * restrict nptr,
                      char ** restrict endptr,
                      int base)
{
    intmax_t value;

    DC_TRACE(env);
    errno = 0;
    value = strtoimax(nptr, endptr, base);

    if(value == 0 || value == INTMAX_MIN || value == INTMAX_MAX)
    {
        if(errno != 0)
        {
            DC_ERROR_RAISE_ERRNO(err, errno);
        }
    }

    return value;
}

uintmax_t dc_strtoumax(const struct dc_env *env,
                       struct dc_error           *err,
                       const char * restrict nptr,
                       char ** restrict endptr,
                       int base)
{
    uintmax_t value;

    DC_TRACE(env);
    errno = 0;
    value = strtoumax(nptr, endptr, base);

    if(value == 0 || value == UINTMAX_MAX)
    {
        if(errno != 0)
        {
            DC_ERROR_RAISE_ERRNO(err, errno);
        }
    }

    return value;
}

intmax_t dc_wcstoimax(const struct dc_env *env, struct dc_error *err,const wchar_t *restrict nptr, wchar_t **restrict endptr, int base)
{
    intmax_t value;

    DC_TRACE(env);
    errno = 0;
    value = wcstoimax(nptr, endptr, base);

    if(value == 0 || value == INTMAX_MIN || value == INTMAX_MAX)
    {
        if(errno != 0)
        {
            DC_ERROR_RAISE_ERRNO(err, errno);
        }
    }

    return value;
}

uintmax_t dc_wcstoumax(const struct dc_env *env, struct dc_error *err,const wchar_t *restrict nptr, wchar_t **restrict endptr, int base)
{
    uintmax_t value;

    DC_TRACE(env);
    errno = 0;
    value = wcstoumax(nptr, endptr, base);

    if(value == 0 || value == UINTMAX_MAX)
    {
        if(errno != 0)
        {
            DC_ERROR_RAISE_ERRNO(err, errno);
        }
    }

    return value;
}
