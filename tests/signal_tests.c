#include "tests.h"
#include <dc_env/env.h>
#include <dc_error/error.h>


// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables)

static struct dc_env *env;
static struct dc_error *err;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
Describe(dc_signal);
#pragma GCC diagnostic pop

BeforeEach(dc_signal)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}

AfterEach(dc_signal)
{
    free(env);
    dc_error_reset(err);
    free(err);
}

Ensure(dc_signal, dc_raise_tests)
{
}

TestSuite *dc_signal_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();

    return suite;
}

// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables)
