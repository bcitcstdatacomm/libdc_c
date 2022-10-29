#include "dc_c/dc_locale.h"


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
