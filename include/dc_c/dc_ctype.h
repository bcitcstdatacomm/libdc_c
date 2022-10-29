#ifndef LIBDC_C_DC_CTYPE_H
#define LIBDC_C_DC_CTYPE_H


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
#include <ctype.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isalnum(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isalpha(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isblank(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_iscntrl(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isdigit(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isgraph(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_islower(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isprint(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_ispunct(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isspace(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isupper(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_isxdigit(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_tolower(const struct dc_env *env, int c);

/**
 *
 * @param env
 * @param c
 * @return
 */
int dc_toupper(const struct dc_env *env, int c);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_C_DC_CTYPE_H