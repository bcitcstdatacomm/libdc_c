#include "tests.h"
#include <dc_env/env.h>
#include <dc_error/error.h>


// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables)

static struct dc_env *env;
static struct dc_error *err;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
Describe(dc_inttypes);

BeforeEach(dc_inttypes)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}

AfterEach(dc_inttypes)
{
    free(env);
    dc_error_reset(err);
    free(err);
}

Ensure(dc_inttypes, dc_imaxabs_tests)
{
}

Ensure(dc_inttypes, dc_imaxdiv_tests)
{
}

Ensure(dc_inttypes, dc_strtoimax_tests)
{
}

Ensure(dc_inttypes, dc_strtoumax_tests)
{
}

Ensure(dc_inttypes, dc_wcstoimax_tests)
{
}

Ensure(dc_inttypes, dc_wcstoumax_tests)
{
}

TestSuite *dc_inttypes_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();
    add_test_with_context(suite, dc_inttypes, dc_imaxabs_tests);
    add_test_with_context(suite, dc_inttypes, dc_imaxdiv_tests);
    add_test_with_context(suite, dc_inttypes, dc_strtoimax_tests);
    add_test_with_context(suite, dc_inttypes, dc_strtoumax_tests);
    add_test_with_context(suite, dc_inttypes, dc_wcstoimax_tests);
    add_test_with_context(suite, dc_inttypes, dc_wcstoumax_tests);

    return suite;
}

// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables)
