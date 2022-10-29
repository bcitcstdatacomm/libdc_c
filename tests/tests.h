#ifndef LIBDC_C_TESTS_H
#define LIBDC_C_TESTS_H


#include <cgreen/cgreen.h>


TestSuite *dc_inttypes_tests(void);
TestSuite *dc_signal_tests(void);
TestSuite *dc_stdio_tests(void);
TestSuite *dc_stdlib_tests(void);
TestSuite *dc_string_tests(void);
TestSuite *dc_time_tests(void);
TestSuite *dc_unistd_tests(void);


#endif // LIBDC_C_TESTS_H
