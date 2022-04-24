project(execute)

file(GLOB SRCS_C *.c *.cpp)
file(GLOB SRCS_H *.h *.hpp)

target_include_directories(
    example
    PUBLIC ${CMAKE_CURRENT_LIST_DIR}
    )

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR}/libexample.a)