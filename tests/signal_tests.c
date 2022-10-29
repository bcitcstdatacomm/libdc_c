#include "tests.h"
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


AfterEach(dc_signal)
{
}

TestSuite *dc_signal_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();

    return suite;
}
