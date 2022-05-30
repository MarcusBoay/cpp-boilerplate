add_executable(my_test
    ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp
)

target_include_directories(my_test PUBLIC
    ${PROJECT_SOURCE_DIR}/unittest/include
)

target_link_libraries(my_test
    # TODO
)

target_compile_definitions(my_test
    # TODO
)

