#include "tests.h"
#include "dc_string.h"
#include <dc_error/error.h>
#include <dc_env/env.h>


static struct dc_c_env *env;
static struct dc_error *err;


Describe(dc_inttypes);

BeforeEach(dc_inttypes)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}


AfterEach(dc_string)
{}

Ensure(dc_string, dc_memcpy_tests)
{
}

Ensure(dc_string, dc_memset_tests)
{
}

Ensure(dc_string, dc_strcmp_tests)
{
}

Ensure(dc_string, dc_strncmp_tests)
{
}

Ensure(dc_string, dc_strcpy_tests)
{
}

Ensure(dc_string, dc_strlen_tests)
{
    const char *values[] =
            {
                    "",
                    "A",
                    "hello, world",
                    "123",
                    "!",
                    "HI"
            };

    for(size_t i = 0; i < sizeof(values) / sizeof(char *); i++)
    {
        const char *value;

        value = values[i];
        assert_that(dc_strlen(&env, value), is_equal_to(strlen(value)));
    }
}

Ensure(dc_string, dc_strtok_r_tests)
{
}

TestSuite *dc_string_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();
    add_test_with_context(suite, dc_string, dc_memcpy_tests);
    add_test_with_context(suite, dc_string, dc_memset_tests);
    add_test_with_context(suite, dc_string, dc_strcmp_tests);
    add_test_with_context(suite, dc_string, dc_strncmp_tests);
    add_test_with_context(suite, dc_string, dc_strcpy_tests);
    add_test_with_context(suite, dc_string, dc_strlen_tests);
    add_test_with_context(suite, dc_string, dc_strtok_r_tests);

    return suite;
}
