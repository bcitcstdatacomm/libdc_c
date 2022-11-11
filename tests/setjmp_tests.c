#include "tests.h"
#include <dc_env/env.h>
#include <dc_error/error.h>


// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables)

static struct dc_env *env;
static struct dc_error *err;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
Describe(dc_setjmp);
#pragma GCC diagnostic pop

BeforeEach(dc_setjmp)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}

AfterEach(dc_setjmp)
{
    free(env);
    dc_error_reset(err);
    free(err);
}

Ensure(dc_setjmp, dc_longjmp_tests)
{
}

Ensure(dc_setjmp, dc_setjmp_tests)
{
}

TestSuite *dc_setjmp_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();

    return suite;
}

// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables)
