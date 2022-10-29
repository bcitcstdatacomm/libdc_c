#include "dc_c/dc_setjmp.h"


void dc_longjmp(const struct dc_env *env, jmp_buf buf, int val)
{
    DC_TRACE(env);
    errno = 0;
    longjmp(buf, val);
}

int dc_setjmp(const struct dc_env *env, jmp_buf buf)
{
    int ret_val;

    DC_TRACE(env);
    errno = 0;
    ret_val = setjmp(buf);

    return ret_val;
}
