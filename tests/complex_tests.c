#include "tests.h"
#include <dc_env/env.h>
#include <dc_error/error.h>


// NOLINTBEGIN(cppcoreguidelines-avoid-non-const-global-variables)

static struct dc_env *env;
static struct dc_error *err;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
Describe(dc_complex);
#pragma GCC diagnostic pop

BeforeEach(dc_complex)
{
    err = dc_error_create(false);
    env = dc_env_create(err, false, NULL);
}

AfterEach(dc_complex)
{
    free(env);
    dc_error_reset(err);
    free(err);
}

Ensure(dc_complex, dc_cabs_tests)
{
}

Ensure(dc_complex, dc_cabsf_tests)
{
}

Ensure(dc_complex, dc_cabsl_tests)
{
}

Ensure(dc_complex, dc_cacos_tests)
{
}

Ensure(dc_complex, dc_cacosf_tests)
{
}

Ensure(dc_complex, dc_cacosh_tests)
{
}

Ensure(dc_complex, dc_cacoshf_tests)
{
}

Ensure(dc_complex, dc_cacoshl_tests)
{
}

Ensure(dc_complex, dc_cacosl_tests)
{
}

Ensure(dc_complex, dc_carg_tests)
{
}

Ensure(dc_complex, dc_cargf_tests)
{
}

Ensure(dc_complex, dc_cargl_tests)
{
}

Ensure(dc_complex, dc_casin_tests)
{
}

Ensure(dc_complex, dc_casinf_tests)
{
}

Ensure(dc_complex, dc_casinh_tests)
{
}

Ensure(dc_complex, dc_casinhf_tests)
{
}

Ensure(dc_complex, dc_casinhl_tests)
{
}

Ensure(dc_complex, dc_casinl_tests)
{
}

Ensure(dc_complex, dc_catan_tests)
{
}

Ensure(dc_complex, dc_catanf_tests)
{
}

Ensure(dc_complex, dc_catanh_tests)
{
}

Ensure(dc_complex, dc_catanhf_tests)
{
}

Ensure(dc_complex, dc_catanhl_tests)
{
}

Ensure(dc_complex, dc_catanl_tests)
{
}

Ensure(dc_complex, dc_ccos_tests)
{
}

Ensure(dc_complex, dc_ccosf_tests)
{
}

Ensure(dc_complex, dc_ccosh_tests)
{
}

Ensure(dc_complex, dc_ccoshf_tests)
{
}

Ensure(dc_complex, dc_cexp_tests)
{
}

Ensure(dc_complex, dc_cexpf_tests)
{
}

Ensure(dc_complex, dc_cexpl_tests)
{
}

Ensure(dc_complex, dc_cimag_tests)
{
}

Ensure(dc_complex, dc_cimagf_tests)
{
}

Ensure(dc_complex, dc_cimagl_tests)
{
}

Ensure(dc_complex, dc_clog_tests)
{
}

Ensure(dc_complex, dc_clogf_tests)
{
}

Ensure(dc_complex, dc_clogl_tests)
{
}

Ensure(dc_complex, dc_conj_tests)
{
}

Ensure(dc_complex, dc_conjf_tests)
{
}

Ensure(dc_complex, dc_conjl_tests)
{
}

Ensure(dc_complex, dc_cpow_tests)
{
}

Ensure(dc_complex, dc_cpowf_tests)
{
}

Ensure(dc_complex, dc_cpowl_tests)
{
}

Ensure(dc_complex, dc_cproj_tests)
{
}

Ensure(dc_complex, dc_cprojf_tests)
{
}

Ensure(dc_complex, dc_cprojl_tests)
{
}

Ensure(dc_complex, dc_creal_tests)
{
}

Ensure(dc_complex, dc_crealf_tests)
{
}

Ensure(dc_complex, dc_creall_tests)
{
}

Ensure(dc_complex, dc_csin_tests)
{
}

Ensure(dc_complex, dc_csinf_tests)
{
}

Ensure(dc_complex, dc_csinh_tests)
{
}

Ensure(dc_complex, dc_csinhf_tests)
{
}

Ensure(dc_complex, dc_csqrt_tests)
{
}

Ensure(dc_complex, dc_csqrtf_tests)
{
}

Ensure(dc_complex, dc_csqrtl_tests)
{
}

Ensure(dc_complex, dc_ctan_tests)
{
}

Ensure(dc_complex, dc_ctanf_tests)
{
}

Ensure(dc_complex, dc_ctanh_tests)
{
}

Ensure(dc_complex, dc_ctanhf_tests)
{
}

TestSuite *dc_complex_tests(void)
{
    TestSuite *suite;

    suite = create_test_suite();
    add_test_with_context(suite, dc_complex, dc_cabs_tests);
    add_test_with_context(suite, dc_complex, dc_cabsf_tests);
    add_test_with_context(suite, dc_complex, dc_cabsl_tests);
    add_test_with_context(suite, dc_complex, dc_cacos_tests);
    add_test_with_context(suite, dc_complex, dc_cacosf_tests);
    add_test_with_context(suite, dc_complex, dc_cacosh_tests);
    add_test_with_context(suite, dc_complex, dc_cacoshf_tests);
    add_test_with_context(suite, dc_complex, dc_cacoshl_tests);
    add_test_with_context(suite, dc_complex, dc_cacosl_tests);
    add_test_with_context(suite, dc_complex, dc_carg_tests);
    add_test_with_context(suite, dc_complex, dc_cargf_tests);
    add_test_with_context(suite, dc_complex, dc_cargl_tests);
    add_test_with_context(suite, dc_complex, dc_casin_tests);
    add_test_with_context(suite, dc_complex, dc_casinf_tests);
    add_test_with_context(suite, dc_complex, dc_casinh_tests);
    add_test_with_context(suite, dc_complex, dc_casinhf_tests);
    add_test_with_context(suite, dc_complex, dc_casinhl_tests);
    add_test_with_context(suite, dc_complex, dc_casinl_tests);
    add_test_with_context(suite, dc_complex, dc_catan_tests);
    add_test_with_context(suite, dc_complex, dc_catanf_tests);
    add_test_with_context(suite, dc_complex, dc_catanh_tests);
    add_test_with_context(suite, dc_complex, dc_catanhf_tests);
    add_test_with_context(suite, dc_complex, dc_catanhl_tests);
    add_test_with_context(suite, dc_complex, dc_catanl_tests);
    add_test_with_context(suite, dc_complex, dc_ccos_tests);
    add_test_with_context(suite, dc_complex, dc_ccosf_tests);
    add_test_with_context(suite, dc_complex, dc_ccosh_tests);
    add_test_with_context(suite, dc_complex, dc_ccoshf_tests);
    add_test_with_context(suite, dc_complex, dc_cexp_tests);
    add_test_with_context(suite, dc_complex, dc_cexpf_tests);
    add_test_with_context(suite, dc_complex, dc_cexpl_tests);
    add_test_with_context(suite, dc_complex, dc_cimag_tests);
    add_test_with_context(suite, dc_complex, dc_cimagf_tests);
    add_test_with_context(suite, dc_complex, dc_cimagl_tests);
    add_test_with_context(suite, dc_complex, dc_clog_tests);
    add_test_with_context(suite, dc_complex, dc_clogf_tests);
    add_test_with_context(suite, dc_complex, dc_clogl_tests);
    add_test_with_context(suite, dc_complex, dc_conj_tests);
    add_test_with_context(suite, dc_complex, dc_conjf_tests);
    add_test_with_context(suite, dc_complex, dc_conjl_tests);
    add_test_with_context(suite, dc_complex, dc_cpow_tests);
    add_test_with_context(suite, dc_complex, dc_cpowf_tests);
    add_test_with_context(suite, dc_complex, dc_cpowl_tests);
    add_test_with_context(suite, dc_complex, dc_cproj_tests);
    add_test_with_context(suite, dc_complex, dc_cprojf_tests);
    add_test_with_context(suite, dc_complex, dc_cprojl_tests);
    add_test_with_context(suite, dc_complex, dc_creal_tests);
    add_test_with_context(suite, dc_complex, dc_crealf_tests);
    add_test_with_context(suite, dc_complex, dc_creall_tests);
    add_test_with_context(suite, dc_complex, dc_csin_tests);
    add_test_with_context(suite, dc_complex, dc_csinf_tests);
    add_test_with_context(suite, dc_complex, dc_csinh_tests);
    add_test_with_context(suite, dc_complex, dc_csinhf_tests);
    add_test_with_context(suite, dc_complex, dc_csqrt_tests);
    add_test_with_context(suite, dc_complex, dc_csqrtf_tests);
    add_test_with_context(suite, dc_complex, dc_csqrtl_tests);
    add_test_with_context(suite, dc_complex, dc_ctan_tests);
    add_test_with_context(suite, dc_complex, dc_ctanf_tests);
    add_test_with_context(suite, dc_complex, dc_ctanh_tests);
    add_test_with_context(suite, dc_complex, dc_ctanhf_tests);

    return suite;
}

// NOLINTEND(cppcoreguidelines-avoid-non-const-global-variables)
