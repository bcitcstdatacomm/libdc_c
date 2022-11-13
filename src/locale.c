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


#include "dc_c/dc_locale.h"
#include <locale.h>


struct lconv *dc_localeconv(const struct dc_env *env)
{
    struct lconv *ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = localeconv();

    return ret_val;
}

char *dc_setlocale(const struct dc_env *env, struct dc_error *err, int category, const char *locale)
{
    char *ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = setlocale(category, locale);

    // TODO - handle this properly
    if(ret_val == NULL)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}
