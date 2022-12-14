set(TEST_HEADER_LIST
        tests.h
        )

set(TEST_SOURCE_LIST
        main.c
        complex_tests.c
        ctype_tests.c
        inttypes_tests.c
        locale_tests.c
        math_tests.c
        setjmp_tests.c
        signal_tests.c
        stdio_tests.c
        stdlib_tests.c
        string_tests.c
        time_tests.c
        wchar_tests.c
        wctype_tests.c
        )

include_directories(${CGREEN_PUBLIC_INCLUDE_DIRS} ${PROJECT_BINARY_DIR})
add_executable(libdc_c_test ${TEST_SOURCE_LIST} ${TEST_HEADER_LIST} ${SOURCE_LIST} ${HEADER_LIST})

target_compile_features(libdc_c_test PRIVATE c_std_17)

target_include_directories(libdc_c_test PRIVATE ../include)
target_include_directories(libdc_c_test PRIVATE /usr/local/include)

if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    target_include_directories(libdc_c_test PRIVATE /opt/homebrew/include)
else ()
    target_include_directories(libdc_c_test PRIVATE /usr/include)
endif ()

find_library(LIBCGREEN cgreen REQUIRED)
find_library(LIBDC_ERROR dc_error REQUIRED)
find_library(LIBDC_ENV dc_env REQUIRED)
find_library(LIBM m)

target_link_libraries(libdc_c_test PRIVATE ${LIBCGREEN})
target_link_libraries(libdc_c_test PRIVATE ${LIBDC_ERROR})
target_link_libraries(libdc_c_test PRIVATE ${LIBDC_ENV})

if(LIBM)
    target_link_libraries(libdc_c_test PUBLIC ${LIBM})
endif()

add_test(NAME libdc_c_test COMMAND libdc_c_test)

