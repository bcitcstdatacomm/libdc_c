set(TEST_HEADER_LIST
        tests.h
        )

set(TEST_SOURCE_LIST
        main.c
        inttypes_tests.c
        signal_tests.c
        stdio_tests.c
        stdlib_tests.c
        string_tests.c
        time_tests.c
        unistd_tests.c
        )

include_directories(${CGREEN_PUBLIC_INCLUDE_DIRS} ${PROJECT_BINARY_DIR})
add_executable(libdc_c_test
        ${TEST_SOURCE_LIST} ${TEST_HEADER_LIST} ${SOURCE_LIST} ${HEADER_LIST} ${HEADER_SYS_LIST} ${HEADER_ARPA_LIST} ${HEADER_NET_LIST})

target_compile_features(libdc_c_test PRIVATE c_std_17)
target_compile_options(libdc_c_test PRIVATE -g)

target_include_directories(libdc_c_test PRIVATE ../include/dc_c)
target_include_directories(libdc_c_test PRIVATE /usr/include)
target_include_directories(libdc_c_test PRIVATE /usr/local/include)

find_library(LIBCGREEN cgreen REQUIRED)
find_library(LIBDC_ERROR dc_error REQUIRED)
find_library(LIBDC_ENV dc_env REQUIRED)

target_link_libraries(libdc_c_test PRIVATE ${LIBCGREEN})
target_link_libraries(libdc_c_test PRIVATE ${LIBDC_ERROR})
target_link_libraries(libdc_c_test PRIVATE ${LIBDC_ENV})

add_test(NAME dc_c_test COMMAND libdc_c_test)
