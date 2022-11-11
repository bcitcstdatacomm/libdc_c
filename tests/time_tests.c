#include "tests.h"
#include <dc_env/env.h>
#include <dc_error/error.h>


// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables)

static struct dc_env *env;
static struct dc_error *err;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
Describe(dc_time);

BeforeEach(dc_time)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}

AfterEach(dc_time)
{
    free(env);
    dc_error_reset(err);
    free(err);
}

Ensure(dc_time, dc_clock_tests)
{
}

Ensure(dc_time, dc_difftime_tests)
{
}

Ensure(dc_time, dc_gmtime_tests)
{
}

Ensure(dc_time, dc_localtime_tests)
{
}

Ensure(dc_time, dc_mktime_tests)
{
}

Ensure(dc_time, dc_strftime_tests)
{
}

Ensure(dc_time, dc_time_tests)
{
}

TestSuite *dc_time_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();
    add_test_with_context(suite, dc_time, dc_clock_tests);
    add_test_with_context(suite, dc_time, dc_difftime_tests);
    add_test_with_context(suite, dc_time, dc_gmtime_tests);
    add_test_with_context(suite, dc_time, dc_localtime_tests);
    add_test_with_context(suite, dc_time, dc_mktime_tests);
    add_test_with_context(suite, dc_time, dc_strftime_tests);
    add_test_with_context(suite, dc_time, dc_time_tests);

    return suite;
}


// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables)
