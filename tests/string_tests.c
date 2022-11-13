#include "tests.h"
#include "dc_c/dc_string.h"
#include <dc_env/env.h>
#include <dc_error/error.h>


// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables)

static struct dc_env *env;
static struct dc_error *err;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
Describe(dc_string);
#pragma GCC diagnostic pop

BeforeEach(dc_string)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}

AfterEach(dc_string)
{
    free(env);
    dc_error_reset(err);
    free(err);
}

Ensure(dc_string, dc_memchr_tests)
{
    const char values[] =
            {
                    'H',
                    'e',
                    'l',
                    'l',
                    'o',
                    '\0',
                    'x',
            };
    const char *str = "Hello";
    size_t len;

    len = strlen(str);

    for(size_t i = 0; i < sizeof(values) / sizeof(char); i++)
    {
        char value;

        value = values[i];
        assert_that(dc_memchr(env, str, value, len), is_equal_to(memchr(str, value, len)));
    }
}

Ensure(dc_string, dc_memcmp_tests)
{
}

Ensure(dc_string, dc_memcpy_tests)
{
}

Ensure(dc_string, dc_memmove_tests)
{
}

Ensure(dc_string, dc_memset_tests)
{
}

Ensure(dc_string, dc_strcat_tests)
{
}

Ensure(dc_string, dc_strchr_tests)
{
}

Ensure(dc_string, dc_strcmp_tests)
{
}

Ensure(dc_string, dc_strcoll_tests)
{
}

Ensure(dc_string, dc_strcpy_tests)
{
}

Ensure(dc_string, dc_strcspn_tests)
{
}

Ensure(dc_string, dc_strerror_tests)
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
        assert_that(dc_strlen(env, value), is_equal_to(strlen(value)));
    }
}

Ensure(dc_string, dc_strncat_tests)
{
}

Ensure(dc_string, dc_strncmp_tests)
{
}

Ensure(dc_string, dc_strncpy_tests)
{
}

Ensure(dc_string, dc_strpbrk_tests)
{
}

Ensure(dc_string, dc_strrchr_tests)
{
}

Ensure(dc_string, dc_strspn_tests)
{
}

Ensure(dc_string, dc_strstr_tests)
{
}

Ensure(dc_string, dc_strtok_tests)
{
}

Ensure(dc_string, dc_strxfrm_tests)
{
}

TestSuite *dc_string_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();
    add_test_with_context(suite, dc_string, dc_memchr_tests);
    add_test_with_context(suite, dc_string, dc_memcmp_tests);
    add_test_with_context(suite, dc_string, dc_memcpy_tests);
    add_test_with_context(suite, dc_string, dc_memmove_tests);
    add_test_with_context(suite, dc_string, dc_memset_tests);
    add_test_with_context(suite, dc_string, dc_strcat_tests);
    add_test_with_context(suite, dc_string, dc_strchr_tests);
    add_test_with_context(suite, dc_string, dc_strcmp_tests);
    add_test_with_context(suite, dc_string, dc_strcoll_tests);
    add_test_with_context(suite, dc_string, dc_strcpy_tests);
    add_test_with_context(suite, dc_string, dc_strcspn_tests);
    add_test_with_context(suite, dc_string, dc_strerror_tests);
    add_test_with_context(suite, dc_string, dc_strlen_tests);
    add_test_with_context(suite, dc_string, dc_strncat_tests);
    add_test_with_context(suite, dc_string, dc_strncmp_tests);
    add_test_with_context(suite, dc_string, dc_strncpy_tests);
    add_test_with_context(suite, dc_string, dc_strpbrk_tests);
    add_test_with_context(suite, dc_string, dc_strrchr_tests);
    add_test_with_context(suite, dc_string, dc_strspn_tests);
    add_test_with_context(suite, dc_string, dc_strstr_tests);
    add_test_with_context(suite, dc_string, dc_strtok_tests);
    add_test_with_context(suite, dc_string, dc_strxfrm_tests);

    return suite;
}

// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables)
