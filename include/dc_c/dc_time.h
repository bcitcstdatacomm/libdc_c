#ifndef LIBDC_C_DC_TIME_H
#define LIBDC_C_DC_TIME_H


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
#include <time.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param err
 * @return
 */
clock_t dc_clock(const struct dc_env *env, struct dc_error *err);

/**
 *
 * @param env
 * @param time1
 * @param time0
 * @return
 */
double dc_difftime(const struct dc_env *env, time_t time1, time_t time0);

/**
 *
 * @param env
 * @param err
 * @param clock
 * @return
 */
struct tm *dc_gmtime(const struct dc_env *env, struct dc_error *err, const time_t *clock);

/**
 *
 * @param env
 * @param err
 * @param clock
 * @return
 */
struct tm *dc_localtime(const struct dc_env *env, struct dc_error *err, const time_t *clock);

/**
 *
 * @param env
 * @param err
 * @param tm
 * @return
 */
time_t dc_mktime(const struct dc_env *env, struct dc_error *err, struct tm *tm);

/**
 *
 * @param env
 * @param err
 * @param buf
 * @param maxsize
 * @param format
 * @param timeptr
 * @return
 */
size_t dc_strftime(const struct dc_env *env, struct dc_error *err, char * restrict buf, size_t maxsize, const char * restrict format, const struct tm * restrict timeptr);

/**
 *
 * @param env
 * @param err
 * @param tloc
 * @return
 */
time_t dc_time(const struct dc_env *env, struct dc_error *err, time_t *tloc);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_C_DC_TIME_H
