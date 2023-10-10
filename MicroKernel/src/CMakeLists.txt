## REQUIRED ##
CMAKE_MINIMUM_REQUIRED(VERSION 3.5.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

## DEFINE ##
project(MicroKernel)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
aux_source_directory(. SRC_DIR)
aux_source_directory(./system SRC_DIR)

## FILE ##
add_executable(${PROJECT_NAME} ${SRC_DIR})

## DEBUG ##
include(CTest)
enable_testing()