#include "dc_wctype.h"


int dc_iswalnum(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswalnum(wc);

    return ret_val;
}

int dc_iswalpha(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswalpha(wc);

    return ret_val;
}

int dc_iswblank(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswblank(wc);

    return ret_val;
}

int dc_iswcntrl(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswcntrl(wc);

    return ret_val;
}

int dc_iswctype(const struct dc_env *env, wint_t wc, wctype_t charclass)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswctype(wc, charclass);

    return ret_val;
}

int dc_iswdigit(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswdigit(wc);

    return ret_val;
}

int dc_iswgraph(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswgraph(wc);

    return ret_val;
}

int dc_iswlower(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswlower(wc);

    return ret_val;
}

int dc_iswprint(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswprint(wc);

    return ret_val;
}

int dc_iswpunct(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswpunct(wc);

    return ret_val;
}

int dc_iswspace(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswspace(wc);

    return ret_val;
}

int dc_iswupper(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswupper(wc);

    return ret_val;
}

int dc_iswxdigit(const struct dc_env *env, wint_t wc)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = iswxdigit(wc);

    return ret_val;
}

wint_t dc_towctrans(const struct dc_env *env, struct dc_error *err, wint_t wc, wctrans_t desc)
{
    wint_t ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = towctrans(wc, desc);

    if(errno != 0)
    {
        DC_ERROR_RAISE_ERRNO(err, errno);
    }

    return ret_val;
}

wint_t dc_towlower(const struct dc_env *env, wint_t wc)
{
    wint_t ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = towlower(wc);

    return ret_val;
}

wint_t dc_towupper(const struct dc_env *env, wint_t wc)
{
    wint_t ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = towupper(wc);

    return ret_val;
}

wctrans_t dc_wctrans(const struct dc_env *env, struct dc_error *err, const char *charclass)
{
    wctrans_t ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = wctrans(charclass);

    if(ret_val == 0)
    {
        if(errno != 0)
        {
            DC_ERROR_RAISE_ERRNO(err, errno);
        }
        // TODO: otherwise?
    }

    return ret_val;
}

wctype_t dc_wctype(const struct dc_env *env, struct dc_error *err, const char *property)
{
    wctype_t ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = wctype(property);

    if(ret_val == 0)
    {
        // TODO: now what?
    }

    return ret_val;
}
