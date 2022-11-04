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


#include "dc_c/dc_math.h"
#include <math.h>


double dc_acos(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = acos(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_acosf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = acosf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_acosh(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = acosh(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_acoshf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = acoshf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_acoshl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = acoshl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_acosl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = acosl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_asin(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = asin(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_asinf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = asinf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_asinh(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = asinh(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_asinhf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = asinhf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_asinhl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = asinhl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_asinl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = asinl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_atan(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atan(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_atan2(const struct dc_env *env, struct dc_error *err, double y, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atan2(y, x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_atan2f(const struct dc_env *env, struct dc_error *err, float y, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atan2f(y, x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_atan2l(const struct dc_env *env, struct dc_error *err, long double y, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atan2l(y, x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_atanf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atanf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_atanh(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atanh(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_atanhf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atanhf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_atanhl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atanhl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_atanl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = atanl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_cbrt(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = cbrt(x);

    return ret_val;
}

float dc_cbrtf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = cbrtf(x);

    return ret_val;
}

long double dc_cbrtl(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = cbrtl(x);

    return ret_val;
}

double dc_ceil(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ceil(x);

    return ret_val;
}

float dc_ceilf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ceilf(x);

    return ret_val;
}

long double dc_ceill(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ceill(x);

    return ret_val;
}

double dc_copysign(const struct dc_env *env, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = copysign(x, y);

    return ret_val;
}

float dc_copysignf(const struct dc_env *env, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = copysignf(x, y);

    return ret_val;
}

long double dc_copysignl(const struct dc_env *env, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = copysignl(x, y);

    return ret_val;
}

double dc_cos(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = cos(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_cosf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = cosf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_cosh(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = cosh(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_coshf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = coshf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_coshl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = coshl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_cosl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = cosl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_erf(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = erf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_erfc(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = erfc(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_erfcf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = erfcf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_erfcl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = erfcl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_erff(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = erff(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_erfl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = erfl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_exp(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = exp(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_exp2(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = exp2(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_exp2f(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = exp2f(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_exp2l(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = exp2l(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_expf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = expf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_expl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = expl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_expm1(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = expm1(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_expm1f(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = expm1f(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_expm1l(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = expm1l(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_fabs(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fabs(x);

    return ret_val;
}

float dc_fabsf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fabsf(x);

    return ret_val;
}

long double dc_fabsl(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fabsl(x);

    return ret_val;
}

double dc_fdim(const struct dc_env *env, struct dc_error *err, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fdim(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_fdimf(const struct dc_env *env, struct dc_error *err, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fdimf(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_fdiml(const struct dc_env *env, struct dc_error *err, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fdiml(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_floor(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = floor(x);

    return ret_val;
}

float dc_floorf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = floorf(x);

    return ret_val;
}

long double dc_floorl(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = floorl(x);

    return ret_val;
}

double dc_fma(const struct dc_env *env, struct dc_error *err, double x, double y, double z)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fma(x, y, z);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_fmaf(const struct dc_env *env, struct dc_error *err, float x, float y, float z)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmaf(x, y, z);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_fmal(const struct dc_env *env, struct dc_error *err, long double x, long double y, long double z)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmal(x, y, z);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_fmax(const struct dc_env *env, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmax(x, y);

    return ret_val;
}

float dc_fmaxf(const struct dc_env *env, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmaxf(x, y);

    return ret_val;
}

long double dc_fmaxl(const struct dc_env *env, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmaxl(x, y);

    return ret_val;
}

double dc_fmin(const struct dc_env *env, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmin(x, y);

    return ret_val;
}

float dc_fminf(const struct dc_env *env, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fminf(x, y);

    return ret_val;
}

long double dc_fminl(const struct dc_env *env, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fminl(x, y);

    return ret_val;
}

double dc_fmod(const struct dc_env *env, struct dc_error *err, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmod(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_fmodf(const struct dc_env *env, struct dc_error *err, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmodf(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_fmodl(const struct dc_env *env, struct dc_error *err, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fmodl(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_frexp(const struct dc_env *env, double num, int *exp)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = frexp(num, exp);

    return ret_val;
}

float dc_frexpf(const struct dc_env *env, float num, int *exp)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = frexpf(num, exp);

    return ret_val;
}

long double dc_frexpl(const struct dc_env *env, long double num, int *exp)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = frexpl(num, exp);

    return ret_val;
}

double dc_hypot(const struct dc_env *env, struct dc_error *err, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = hypot(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_hypotf(const struct dc_env *env, struct dc_error *err, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = hypotf(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_hypotl(const struct dc_env *env, struct dc_error *err, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = hypotl(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int dc_ilogb(const struct dc_env *env, struct dc_error *err, double x)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ilogb(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int dc_ilogbf(const struct dc_env *env, struct dc_error *err, float x)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ilogbf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

int dc_ilogbl(const struct dc_env *env, struct dc_error *err, long double x)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ilogbl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_ldexp(const struct dc_env *env, struct dc_error *err, double x, int exp)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ldexp(x, exp);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_ldexpf(const struct dc_env *env, struct dc_error *err, float x, int exp)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ldexpf(x, exp);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_ldexpl(const struct dc_env *env, struct dc_error *err, long double x, int exp)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ldexpl(x, exp);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_lgamma(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lgamma(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_lgammaf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lgammaf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_lgammal(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lgammal(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long long dc_llrint(const struct dc_env *env, struct dc_error *err, double x)
{
    long long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = llrint(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long long dc_llrintf(const struct dc_env *env, struct dc_error *err, float x)
{
    long long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = llrintf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long long dc_llrintl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = llrintl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long long dc_llround(const struct dc_env *env, struct dc_error *err, double x)
{
    long long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = llround(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long long dc_llroundf(const struct dc_env *env, struct dc_error *err, float x)
{
    long long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = llroundf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long long dc_llroundl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = llroundl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_log(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_log10(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log10(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_log10f(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log10f(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_log10l(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log10l(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_log1p(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log1p(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_log1pf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log1pf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_log1pl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log1pl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_log2(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log2(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_log2f(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log2f(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_log2l(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = log2l(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_logb(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = logb(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_logbf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = logbf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_logbl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = logbl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_logf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = logf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_logl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = logl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long dc_lrint(const struct dc_env *env, struct dc_error *err, double x)
{
    long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lrint(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long dc_lrintf(const struct dc_env *env, struct dc_error *err, float x)
{
    long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lrintf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long dc_lrintl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lrintl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long dc_lround(const struct dc_env *env, struct dc_error *err, double x)
{
    long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lround(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long dc_lroundf(const struct dc_env *env, struct dc_error *err, float x)
{
    long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lroundf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long dc_lroundl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = lroundl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_modf(const struct dc_env *env, double x, double *iptr)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = modf(x, iptr);

    return ret_val;
}

float dc_modff(const struct dc_env *env, float value, float *iptr)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = modff(value, iptr);

    return ret_val;
}

long double dc_modfl(const struct dc_env *env, long double value, long double *iptr)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = modfl(value, iptr);

    return ret_val;
}

double dc_nan(const struct dc_env *env, const char *tagp)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nan(tagp);

    return ret_val;
}

float dc_nanf(const struct dc_env *env, const char *tagp)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nanf(tagp);

    return ret_val;
}

long double dc_nanl(const struct dc_env *env, const char *tagp)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nanl(tagp);

    return ret_val;
}

double dc_nearbyint(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nearbyint(x);

    return ret_val;
}

float dc_nearbyintf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nearbyintf(x);

    return ret_val;
}

long double dc_nearbyintl(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nearbyintl(x);

    return ret_val;
}

double dc_nextafter(const struct dc_env *env, struct dc_error *err, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nextafter(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_nextafterf(const struct dc_env *env, struct dc_error *err, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nextafterf(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_nextafterl(const struct dc_env *env, struct dc_error *err, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nextafterl(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_nexttoward(const struct dc_env *env, struct dc_error *err, double x, long double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nexttoward(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_nexttowardf(const struct dc_env *env, struct dc_error *err, float x, long double y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nexttowardf(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_nexttowardl(const struct dc_env *env, struct dc_error *err, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = nexttowardl(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_pow(const struct dc_env *env, struct dc_error *err, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = pow(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_powf(const struct dc_env *env, struct dc_error *err, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = powf(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_powl(const struct dc_env *env, struct dc_error *err, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = powl(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_remainder(const struct dc_env *env, struct dc_error *err, double x, double y)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = remainder(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_remainderf(const struct dc_env *env, struct dc_error *err, float x, float y)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = remainderf(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_remainderl(const struct dc_env *env, struct dc_error *err, long double x, long double y)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = remainderl(x, y);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_remquo(const struct dc_env *env, struct dc_error *err, double x, double y, int *quo)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = remquo(x, y, quo);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_remquof(const struct dc_env *env, struct dc_error *err, float x, float y, int *quo)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = remquof(x, y, quo);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_remquol(const struct dc_env *env, struct dc_error *err, long double x, long double y, int *quo)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = remquol(x, y, quo);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_rint(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = rint(x);

    return ret_val;
}

float dc_rintf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = rintf(x);

    return ret_val;
}

long double dc_rintl(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = rintl(x);

    return ret_val;
}

double dc_round(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = round(x);

    return ret_val;
}

float dc_roundf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = roundf(x);

    return ret_val;
}

long double dc_roundl(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = roundl(x);

    return ret_val;
}

double dc_scalbln(const struct dc_env *env, struct dc_error *err, double x, long n)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = scalbln(x, n);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_scalblnf(const struct dc_env *env, struct dc_error *err, float x, long n)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = scalblnf(x, n);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_scalblnl(const struct dc_env *env, struct dc_error *err, long double x, long n)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = scalblnl(x, n);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_scalbn(const struct dc_env *env, struct dc_error *err, double x, int n)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = scalbn(x, n);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_scalbnf(const struct dc_env *env, struct dc_error *err, float x, int n)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = scalbnf(x, n);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_scalbnl(const struct dc_env *env, struct dc_error *err, long double x, int n)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = scalbnl(x, n);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_sin(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sin(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_sinf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sinf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_sinh(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sinh(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_sinhf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sinhf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_sinhl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sinhl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_sinl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sinl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_sqrt(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sqrt(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_sqrtl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = sqrtl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_tan(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tan(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_tanf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tanf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_tanh(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tanh(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_tanhf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tanhf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_tanhl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tanhl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_tanl(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tanl(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_tgamma(const struct dc_env *env, struct dc_error *err, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tgamma(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

float dc_tgammaf(const struct dc_env *env, struct dc_error *err, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tgammaf(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

long double dc_tgammal(const struct dc_env *env, struct dc_error *err, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tgammal(x);

    // TODO - handle this properly
    if((math_errhandling & MATH_ERRNO) && errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

double dc_trunc(const struct dc_env *env, double x)
{
    double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = trunc(x);

    return ret_val;
}

float dc_truncf(const struct dc_env *env, float x)
{
    float ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = truncf(x);

    return ret_val;
}

long double dc_truncl(const struct dc_env *env, long double x)
{
    long double ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = truncl(x);

    return ret_val;
}
