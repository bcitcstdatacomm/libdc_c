#include "tests.h"


int main(int argc, char **argv)
{
    TestSuite *suite;
    TestReporter *reporter;
    int suite_result;

    suite = create_test_suite();
    reporter = create_text_reporter();

    add_suite(suite, dc_complex_tests());
    add_suite(suite, dc_ctype_tests());
    add_suite(suite, dc_inttypes_tests());
    add_suite(suite, dc_locale_tests());
    add_suite(suite, dc_math_tests());
    add_suite(suite, dc_setjmp_tests());
    add_suite(suite, dc_signal_tests());
    add_suite(suite, dc_stdio_tests());
    add_suite(suite, dc_stdlib_tests());
    add_suite(suite, dc_string_tests());
    add_suite(suite, dc_time_tests());
    add_suite(suite, dc_wchar_tests());
    add_suite(suite, dc_wctype_tests());

    if(argc > 1)
    {
        suite_result = run_single_test(suite, argv[1], reporter);
    }
    else
    {
        suite_result = run_test_suite(suite, reporter);
    }

    destroy_test_suite(suite);
    destroy_reporter(reporter);

    return suite_result;
}
