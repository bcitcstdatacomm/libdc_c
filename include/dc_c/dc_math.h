#ifndef LIBDC_C_DC_MATH_H
#define LIBDC_C_DC_MATH_H


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
#include <math.h>


#ifdef __cplusplus
extern "C" {
#endif


double dc_acos(const struct dc_env *env, struct dc_error *err, double x);
float dc_acosf(const struct dc_env *env, struct dc_error *err, float x);
double dc_acosh(const struct dc_env *env, struct dc_error *err, double x);
float dc_acoshf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_acoshl(const struct dc_env *env, struct dc_error *err, long double x);
long double dc_acosl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_asin(const struct dc_env *env, struct dc_error *err, double x);
float dc_asinf(const struct dc_env *env, struct dc_error *err, float x);
double dc_asinh(const struct dc_env *env, struct dc_error *err, double x);
float dc_asinhf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_asinhl(const struct dc_env *env, struct dc_error *err, long double x);
long double dc_asinl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_atan(const struct dc_env *env, struct dc_error *err, double x);
double dc_atan2(const struct dc_env *env, struct dc_error *err, double y, double x);
float dc_atan2f(const struct dc_env *env, struct dc_error *err, float y, float x);
long double dc_atan2l(const struct dc_env *env, struct dc_error *err, long double y, long double x);
float dc_atanf(const struct dc_env *env, struct dc_error *err, float x);
double dc_atanh(const struct dc_env *env, struct dc_error *err, double x);
float dc_atanhf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_atanhl(const struct dc_env *env, struct dc_error *err, long double x);
long double dc_atanl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_cbrt(const struct dc_env *env, double x);
float dc_cbrtf(const struct dc_env *env, float x);
long double dc_cbrtl(const struct dc_env *env, long double x);
double dc_ceil(const struct dc_env *env, double x);
float dc_ceilf(const struct dc_env *env, float x);
long double dc_ceill(const struct dc_env *env, long double x);
double dc_copysign(const struct dc_env *env, double x, double y);
float dc_copysignf(const struct dc_env *env, float x, float y);
long double dc_copysignl(const struct dc_env *env, long double x, long double y);
double dc_cos(const struct dc_env *env, struct dc_error *err, double x);
float dc_cosf(const struct dc_env *env, struct dc_error *err, float x);
double dc_cosh(const struct dc_env *env, struct dc_error *err, double x);
float dc_coshf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_coshl(const struct dc_env *env, struct dc_error *err, long double x);
long double dc_cosl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_erf(const struct dc_env *env, struct dc_error *err, double x);
double dc_erfc(const struct dc_env *env, struct dc_error *err, double x);
float dc_erfcf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_erfcl(const struct dc_env *env, struct dc_error *err, long double x);
float dc_erff(const struct dc_env *env, struct dc_error *err, float x);
long double dc_erfl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_exp(const struct dc_env *env, struct dc_error *err, double x);
double dc_exp2(const struct dc_env *env, struct dc_error *err, double x);
float dc_exp2f(const struct dc_env *env, struct dc_error *err, float x);
long double dc_exp2l(const struct dc_env *env, struct dc_error *err, long double x);
float dc_expf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_expl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_expm1(const struct dc_env *env, struct dc_error *err, double x);
float dc_expm1f(const struct dc_env *env, struct dc_error *err, float x);
long double dc_expm1l(const struct dc_env *env, struct dc_error *err, long double x);
double dc_fabs(const struct dc_env *env, double x);
float dc_fabsf(const struct dc_env *env, float x);
long double dc_fabsl(const struct dc_env *env, long double x);
double dc_fdim(const struct dc_env *env, struct dc_error *err, double x, double y);
float dc_fdimf(const struct dc_env *env, struct dc_error *err, float x, float y);
long double dc_fdiml(const struct dc_env *env, struct dc_error *err, long double x, long double y);
double dc_floor(const struct dc_env *env, double x);
float dc_floorf(const struct dc_env *env, float x);
long double dc_floorl(const struct dc_env *env, long double x);
double dc_fma(const struct dc_env *env, struct dc_error *err, double x, double y, double z);
float dc_fmaf(const struct dc_env *env, struct dc_error *err, float x, float y, float z);
long double dc_fmal(const struct dc_env *env, struct dc_error *err, long double x, long double y, long double z);
double dc_fmax(const struct dc_env *env, double x, double y);
float dc_fmaxf(const struct dc_env *env, float x, float y);
long double dc_fmaxl(const struct dc_env *env, long double x, long double y);
double dc_fmin(const struct dc_env *env, double x, double y);
float dc_fminf(const struct dc_env *env, float x, float y);
long double dc_fminl(const struct dc_env *env, long double x, long double y);
double dc_fmod(const struct dc_env *env, struct dc_error *err, double x, double y);
float dc_fmodf(const struct dc_env *env, struct dc_error *err, float x, float y);
long double dc_fmodl(const struct dc_env *env, struct dc_error *err, long double x, long double y);
double dc_frexp(const struct dc_env *env, double num, int *exp);
float dc_frexpf(const struct dc_env *env, float num, int *exp);
long double dc_frexpl(const struct dc_env *env, long double num, int *exp);
double dc_hypot(const struct dc_env *env, struct dc_error *err, double x, double y);
float dc_hypotf(const struct dc_env *env, struct dc_error *err, float x, float y);
long double dc_hypotl(const struct dc_env *env, struct dc_error *err, long double x, long double y);
int dc_ilogb(const struct dc_env *env, struct dc_error *err, double x);
int dc_ilogbf(const struct dc_env *env, struct dc_error *err, float x);
int dc_ilogbl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_ldexp(const struct dc_env *env, struct dc_error *err, double x, int exp);
float dc_ldexpf(const struct dc_env *env, struct dc_error *err, float x, int exp);
long double dc_ldexpl(const struct dc_env *env, struct dc_error *err, long double x, int exp);
double dc_lgamma(const struct dc_env *env, struct dc_error *err, double x);
float dc_lgammaf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_lgammal(const struct dc_env *env, struct dc_error *err, long double x);
long long dc_llrint(const struct dc_env *env, struct dc_error *err, double x);
long long dc_llrintf(const struct dc_env *env, struct dc_error *err, float x);
long long dc_llrintl(const struct dc_env *env, struct dc_error *err, long double x);
long long dc_llround(const struct dc_env *env, struct dc_error *err, double x);
long long dc_llroundf(const struct dc_env *env, struct dc_error *err, float x);
long long dc_llroundl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_log(const struct dc_env *env, struct dc_error *err, double x);
double dc_log10(const struct dc_env *env, struct dc_error *err, double x);
float dc_log10f(const struct dc_env *env, struct dc_error *err, float x);
long double dc_log10l(const struct dc_env *env, struct dc_error *err, long double x);
double dc_log1p(const struct dc_env *env, struct dc_error *err, double x);
float dc_log1pf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_log1pl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_log2(const struct dc_env *env, struct dc_error *err, double x);
float dc_log2f(const struct dc_env *env, struct dc_error *err, float x);
long double dc_log2l(const struct dc_env *env, struct dc_error *err, long double x);
double dc_logb(const struct dc_env *env, struct dc_error *err, double x);
float dc_logbf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_logbl(const struct dc_env *env, struct dc_error *err, long double x);
float dc_logf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_logl(const struct dc_env *env, struct dc_error *err, long double x);
long dc_lrint(const struct dc_env *env, struct dc_error *err, double x);
long dc_lrintf(const struct dc_env *env, struct dc_error *err, float x);
long dc_lrintl(const struct dc_env *env, struct dc_error *err, long double x);
long dc_lround(const struct dc_env *env, struct dc_error *err, double x);
long dc_lroundf(const struct dc_env *env, struct dc_error *err, float x);
long dc_lroundl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_modf(const struct dc_env *env, double x, double *iptr);
float dc_modff(const struct dc_env *env, float value, float *iptr);
long double dc_modfl(const struct dc_env *env, long double value, long double *iptr);
double dc_nan(const struct dc_env *env, const char *tagp);
float dc_nanf(const struct dc_env *env, const char *tagp);
long double dc_nanl(const struct dc_env *env, const char *tagp);
double dc_nearbyint(const struct dc_env *env, double x);
float dc_nearbyintf(const struct dc_env *env, float x);
long double dc_nearbyintl(const struct dc_env *env, long double x);
double dc_nextafter(const struct dc_env *env, struct dc_error *err, double x, double y);
float dc_nextafterf(const struct dc_env *env, struct dc_error *err, float x, float y);
long double dc_nextafterl(const struct dc_env *env, struct dc_error *err, long double x, long double y);
double dc_nexttoward(const struct dc_env *env, struct dc_error *err, double x, long double y);
float dc_nexttowardf(const struct dc_env *env, struct dc_error *err, float x, long double y);
long double dc_nexttowardl(const struct dc_env *env, struct dc_error *err, long double x, long double y);
double dc_pow(const struct dc_env *env, struct dc_error *err, double x, double y);
float dc_powf(const struct dc_env *env, struct dc_error *err, float x, float y);
long double dc_powl(const struct dc_env *env, struct dc_error *err, long double x, long double y);
double dc_remainder(const struct dc_env *env, struct dc_error *err, double x, double y);
float dc_remainderf(const struct dc_env *env, struct dc_error *err, float x, float y);
long double dc_remainderl(const struct dc_env *env, struct dc_error *err, long double x, long double y);
double dc_remquo(const struct dc_env *env, struct dc_error *err, double x, double y, int *quo);
float dc_remquof(const struct dc_env *env, struct dc_error *err, float x, float y, int *quo);
long double dc_remquol(const struct dc_env *env, struct dc_error *err, long double x, long double y, int *quo);
double dc_rint(const struct dc_env *env, double x);
float dc_rintf(const struct dc_env *env, float x);
long double dc_rintl(const struct dc_env *env, long double x);
double dc_round(const struct dc_env *env, double x);
float dc_roundf(const struct dc_env *env, float x);
long double dc_roundl(const struct dc_env *env, long double x);
double dc_scalbln(const struct dc_env *env, struct dc_error *err, double x, long n);
float dc_scalblnf(const struct dc_env *env, struct dc_error *err, float x, long n);
long double dc_scalblnl(const struct dc_env *env, struct dc_error *err, long double x, long n);
double dc_scalbn(const struct dc_env *env, struct dc_error *err, double x, int n);
float dc_scalbnf(const struct dc_env *env, struct dc_error *err, float x, int n);
long double dc_scalbnl(const struct dc_env *env, struct dc_error *err, long double x, int n);
double dc_sin(const struct dc_env *env, struct dc_error *err, double x);
float dc_sinf(const struct dc_env *env, struct dc_error *err, float x);
double dc_sinh(const struct dc_env *env, struct dc_error *err, double x);
float dc_sinhf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_sinhl(const struct dc_env *env, struct dc_error *err, long double x);
long double dc_sinl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_sqrt(const struct dc_env *env, struct dc_error *err, double x);
float dc_sqrtf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_sqrtl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_tan(const struct dc_env *env, struct dc_error *err, double x);
float dc_tanf(const struct dc_env *env, struct dc_error *err, float x);
double dc_tanh(const struct dc_env *env, struct dc_error *err, double x);
float dc_tanhf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_tanhl(const struct dc_env *env, struct dc_error *err, long double x);
long double dc_tanl(const struct dc_env *env, struct dc_error *err, long double x);
double dc_tgamma(const struct dc_env *env, struct dc_error *err, double x);
float dc_tgammaf(const struct dc_env *env, struct dc_error *err, float x);
long double dc_tgammal(const struct dc_env *env, struct dc_error *err, long double x);
double dc_trunc(const struct dc_env *env, double x);
float dc_truncf(const struct dc_env *env, float x);
long double dc_truncl(const struct dc_env *env, long double x);


#ifdef __cplusplus
}
#endif


#endif // LIBDC_C_DC_MATH_H
