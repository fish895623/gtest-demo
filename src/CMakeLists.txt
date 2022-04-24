add_library(example)

file(GLOB SRCS_C *.c *.cpp)
file(GLOB SRCS_H *.h *.hpp)

target_sources(
        example
        PRIVATE ${SRCS_C}
        PUBLIC ${SRCS_H}
        )

target_include_directories(
        example
        PUBLIC ${CMAKE_CURRENT_LIST_DIR}
        )
###
# target_link_libraries(example)
###

# we use this to get code coverage
# flags are only valid with the GNU compiler and on Linux
if (CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
    target_compile_options(example
            PUBLIC
            "--coverage"
            )
    target_link_options(example
            INTERFACE
            "--coverage"
            )
endif ()
