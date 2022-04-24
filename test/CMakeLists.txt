enable_testing()
include(FetchContent)
FetchContent_Declare(gtest
        QUIET
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.tar.gz
        )
# configure build of googletest
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)

project(testcase)
file(GLOB SRCS *.cpp)
add_executable(
        ${PROJECT_NAME}
        ${SRCS}
)

target_link_libraries(${PROJECT_NAME}
        PRIVATE
        example
        gtest_main
        )

# automatic discovery of unit tests
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}
        PROPERTIES
        LABELS "unit"
        DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
        240
        )
