cmake_minimum_required(VERSION 3.10)
project(3DEngine)

set(CMAKE_CXX_STANDARD 17)

# Dependencies (adjust paths)
find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(Assimp REQUIRED)

include_directories(
    ${SDL2_INCLUDE_DIRS}
    ${OPENGL_INCLUDE_DIRS}
    ${ASSIMP_INCLUDE_DIRS}
    third_party/glm
)

add_executable(Engine
    src/main.cpp
    src/Core/Window.cpp
    src/Core/Renderer.cpp
)

target_link_libraries(Engine
    ${SDL2_LIBRARIES}
    ${OPENGL_LIBRARIES}
    ${ASSIMP_LIBRARIES}
)