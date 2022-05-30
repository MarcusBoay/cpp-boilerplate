add_executable(my_project
    # TODO
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

set_target_properties(my_project PROPERTIES
    VERSION ${VERSION_STRING}
)

target_include_directories(my_project PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

# TODO
# target_link_libraries(my_project
# )

# TODO
# target_compile_definitions(my_project
# )

install(TARGETS my_project COMPONENT main)
