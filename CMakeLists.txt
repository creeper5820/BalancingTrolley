cmake_minimum_required(VERSION 3.5)
project(BalancingTrolley)
set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. SOURCE_LIST)
aux_source_directory(./PidCode SOURCE_LIST)

add_executable(${PROJECT_NAME} ${SOURCE_LIST})