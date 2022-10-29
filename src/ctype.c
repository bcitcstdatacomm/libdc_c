#include "dc_c/dc_ctype.h"


int dc_isalnum(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isalnum(c);

    return ret_val;
}

int dc_isalpha(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isalpha(c);

    return ret_val;
}

int dc_isblank(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isblank(c);

    return ret_val;
}

int dc_iscntrl(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iscntrl(c);

    return ret_val;
}

int dc_isdigit(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isdigit(c);

    return ret_val;
}

int dc_isgraph(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isgraph(c);

    return ret_val;
}

int dc_islower(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = islower(c);

    return ret_val;
}

int dc_isprint(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isprint(c);

    return ret_val;
}

int dc_ispunct(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = ispunct(c);

    return ret_val;
}

int dc_isspace(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isspace(c);

    return ret_val;
}

int dc_isupper(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isupper(c);

    return ret_val;
}

int dc_isxdigit(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = isxdigit(c);

    return ret_val;
}

int dc_tolower(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = tolower(c);

    return ret_val;
}

int dc_toupper(const struct dc_env *env, int c)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = toupper(c);

    return ret_val;
}
