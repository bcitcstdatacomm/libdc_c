#include "dc_c/dc_fenv.h"


int dc_feclearexcept(const struct dc_env *env, struct dc_error *err, int excepts)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = feclearexcept(excepts);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_fegetenv(const struct dc_env *env, struct dc_error *err, fenv_t *envp)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fegetenv(envp);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_fegetexceptflag(const struct dc_env *env, struct dc_error *err, fexcept_t *flagp, int excepts)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fegetexceptflag(flagp, excepts);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_fegetround(const struct dc_env *env, struct dc_error *err)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fegetround();

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_feholdexcept(const struct dc_env *env, struct dc_error *err, fenv_t *envp)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = feholdexcept(envp);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_feraiseexcept(const struct dc_env *env, struct dc_error *err, int excepts)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = feraiseexcept(excepts);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_fesetenv(const struct dc_env *env, struct dc_error *err, const fenv_t *envp)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fesetenv(envp);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_fesetexceptflag(const struct dc_env *env, struct dc_error *err, const fexcept_t *flagp, int excepts)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fesetexceptflag(flagp, excepts);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_fesetround(const struct dc_env *env, struct dc_error *err, int round)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fesetround(round);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}

int dc_fetestexcept(const struct dc_env *env, int excepts)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = fetestexcept(excepts);

    return ret_val;
}

int dc_feupdateenv(const struct dc_env *env, struct dc_error *err, const fenv_t *envp)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = feupdateenv(envp);

    // TODO - handle this properly
    if(ret_val != 0)
    {
        DC_ERROR_RAISE_SYSTEM(err, "", 0);
    }

    return ret_val;
}
