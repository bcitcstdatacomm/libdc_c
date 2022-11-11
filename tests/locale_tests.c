#include "tests.h"
#include <dc_env/env.h>
#include <dc_error/error.h>


// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables)

static struct dc_env *env;
static struct dc_error *err;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
Describe(dc_locale);
#pragma GCC diagnostic pop

BeforeEach(dc_locale)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}

AfterEach(dc_locale)
{
    free(env);
    dc_error_reset(err);
    free(err);
}

Ensure(dc_locale, dc_localeconv_tests)
{
}

Ensure(dc_locale, dc_setlocale_tests)
{
}

TestSuite *dc_locale_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();
    add_test_with_context(suite, dc_locale, dc_localeconv_tests);
    add_test_with_context(suite, dc_locale, dc_setlocale_tests);

    return suite;
}

// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables)
