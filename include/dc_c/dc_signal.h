#ifndef LIBDC_C_DC_SIGNAL_H
#define LIBDC_C_DC_SIGNAL_H


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
#include <signal.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param err
 * @param sig
 * @return
 */
int dc_raise(const struct dc_env *env, struct dc_error *err, int sig);

/**
 *
 * @param env
 * @param err
 * @param sig
 * @param func
 * @return
 */
void (*dc_signal(const struct dc_env *env, struct dc_error *err, int sig,
                 void (*func)(int)))(int);

#ifdef __cplusplus
}
#endif


#endif // LIBDC_C_DC_SIGNAL_H
