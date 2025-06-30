cmake_minimum_required(VERSION 3.20)
project(RatMenu VERSION 0.1 DESCRIPTION "Simple experimental menu")

add_library(${PROJECT_NAME} MODULE
    src/dllmain.cpp
    src/SelfTab.cpp
)

find_package(OpenGL REQUIRED)
find_package(glfw3 3.3 REQUIRED)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/../cmake/imgui ${CMAKE_BINARY_DIR}/imgui)

target_link_libraries(${PROJECT_NAME} PRIVATE
    imgui
    glfw
    OpenGL::GL
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/include
    ${CMAKE_CURRENT_LIST_DIR}/src
)

set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")

