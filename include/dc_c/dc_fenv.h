#ifndef LIBDC_C_DC_FENV_H
#define LIBDC_C_DC_FENV_H


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
#include <fenv.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param err
 * @param excepts
 * @return
 */
int dc_feclearexcept(const struct dc_env *env, struct dc_error *err, int excepts);

/**
 *
 * @param env
 * @param err
 * @param envp
 * @return
 */
int dc_fegetenv(const struct dc_env *env, struct dc_error *err, fenv_t *envp);

/**
 *
 * @param env
 * @param err
 * @param flagp
 * @param excepts
 * @return
 */
int dc_fegetexceptflag(const struct dc_env *env, struct dc_error *err, fexcept_t *flagp, int excepts);

/**
 *
 * @param env
 * @param err
 * @return
 */
int dc_fegetround(const struct dc_env *env, struct dc_error *err);

/**
 *
 * @param env
 * @param err
 * @param envp
 * @return
 */
int dc_feholdexcept(const struct dc_env *env, struct dc_error *err, fenv_t *envp);

/**
 *
 * @param env
 * @param err
 * @param excepts
 * @return
 */
int dc_feraiseexcept(const struct dc_env *env, struct dc_error *err, int excepts);

/**
 *
 * @param env
 * @param err
 * @param envp
 * @return
 */
int dc_fesetenv(const struct dc_env *env, struct dc_error *err, const fenv_t *envp);

/**
 *
 * @param env
 * @param err
 * @param flagp
 * @param excepts
 * @return
 */
int dc_fesetexceptflag(const struct dc_env *env, struct dc_error *err, const fexcept_t *flagp, int excepts);

/**
 *
 * @param env
 * @param err
 * @param round
 * @return
 */
int dc_fesetround(const struct dc_env *env, struct dc_error *err, int round);

/**
 *
 * @param env
 * @param excepts
 * @return
 */
int dc_fetestexcept(const struct dc_env *env, int excepts);

/**
 *
 * @param env
 * @param err
 * @param envp
 * @return
 */
int dc_feupdateenv(const struct dc_env *env, struct dc_error *err, const fenv_t *envp);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_C_DC_FENV_H