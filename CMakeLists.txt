## REQUIRED ##
CMAKE_MINIMUM_REQUIRED(VERSION 3.5.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

## DEFINE ##
project(Balance)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
aux_source_directory(. SRC_DIR)
aux_source_directory(./MicroKernel/system SRC_DIR)
aux_source_directory(./MicroKernel/user SRC_DIR)
aux_source_directory(./Controller/MotionController SRC_DIR)
aux_source_directory(./Controller/PIDRegulator SRC_DIR)

## FILE ##
add_executable(${PROJECT_NAME} ${SRC_DIR})

## DEBUG ##
include(CTest)
enable_testing()