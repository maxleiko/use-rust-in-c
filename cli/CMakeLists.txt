set(CMAKE_C_STANDARD 11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SOURCE src/main.c)
add_executable(cli ${SOURCE})
get_target_property(LIB_DIR ${LIB_NAME} LOCATION)
get_target_property(LIB_INCLUDE ${LIB_NAME} INCLUDE_DIRECTORIES)
message(STATUS LIB_DIR=${LIB_DIR})
message(STATUS LIB_INCLUDE=${LIB_INCLUDE})

target_include_directories(cli PRIVATE ${LIB_INCLUDE})
target_link_libraries(cli ${LIB_DIR}/lib${LIB_NAME}.so)
add_dependencies(cli ${LIB_NAME})