cmake_minimum_required(VERSION 3.7)
project(sample)

# This must match 'lib/Cargo.toml' crate's name
set(LIB_NAME lib)

enable_testing()
add_subdirectory(${LIB_NAME})
add_subdirectory(cli)