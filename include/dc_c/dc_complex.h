#ifndef LIBDC_C_DC_COMPLEX_H
#define LIBDC_C_DC_COMPLEX_H


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
#include <complex.h>


#ifdef __cplusplus
extern "C" {
#endif


/**
 *
 * @param env
 * @param z
 * @return
 */
double dc_cabs(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float dc_cabsf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double dc_cabsl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_cacos(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_cacosf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_cacosh(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_cacoshf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_cacoshl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_cacosl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double dc_carg(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float dc_cargf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double dc_cargl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_casin(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_casinf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_casinh(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_casinhf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_casinhl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_casinl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_catan(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_catanf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_catanh(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_catanhf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_catanhl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_catanl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_ccos(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_ccosf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_ccosh(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_ccoshf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_cexp(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_cexpf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_cexpl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double dc_cimag(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float dc_cimagf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double dc_cimagl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_clog(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_clogf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_clogl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_conj(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_conjf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_conjl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param x
 * @param z
 * @return
 */
double complex dc_cpow(const struct dc_env *env, double complex x, double complex z);

/**
 *
 * @param env
 * @param x
 * @param z
 * @return
 */
float complex dc_cpowf(const struct dc_env *env, float complex x, float complex z);

/**
 *
 * @param env
 * @param x
 * @param z
 * @return
 */
long double complex dc_cpowl(const struct dc_env *env, long double complex x, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_cproj(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_cprojf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_cprojl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double dc_creal(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float dc_crealf(const struct dc_env *env, float complex z);

/**
 *
 *
 * @param env
 * @param z
 * @return
 */
long double dc_creall(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_csin(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_csinf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_csinh(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_csinhf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_csqrt(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_csqrtf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
long double complex dc_csqrtl(const struct dc_env *env, long double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_ctan(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_ctanf(const struct dc_env *env, float complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
double complex dc_ctanh(const struct dc_env *env, double complex z);

/**
 *
 * @param env
 * @param z
 * @return
 */
float complex dc_ctanhf(const struct dc_env *env, float complex z);


#ifdef __cplusplus
}
#endif


// Not on FreeBSD
// long double complex dc_ccoshl(const struct dc_env *env, long double complex z);
// long double complex dc_ccosl(const struct dc_env *env, long double complex z);
// long double complex dc_csinhl(const struct dc_env *env, long double complex z);
// long double complex dc_csinl(const struct dc_env *env, long double complex z);
// long double complex dc_ctanhl(const struct dc_env *env, long double complex z);
// long double complex dc_ctanl(const struct dc_env *env, long double complex z);


#endif // LIBDC_C_DC_COMPLEX_H
