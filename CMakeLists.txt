cmake_minimum_required(VERSION 3.5.0)
project(zombiecide VERSION 0.1.0 LANGUAGES C CXX)

add_executable(zombiecide src/main.cpp)

target_link_libraries(zombiecide SDL2main SDL2 GL)
