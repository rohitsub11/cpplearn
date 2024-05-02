cmake_minimum_required(VERSION 3.5)
project(cplusplus VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories("${PROJECT_SOURCE_DIR}/inc")
set(source_dir "${PROJECT_SOURCE_DIR}/src")

#tell the compiler which files to compile
file (GLOB source_files "{include_directories}/*.h" "${source_dir}/*.cpp")

add_executable(cplusplus ${source_files})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
