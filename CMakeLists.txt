cmake_minimum_required(VERSION 3.10)

project(Vulkan2DGame)

set(CMAKE_CXX_STANDARD 17)

# Find Vulkan
find_package(Vulkan REQUIRED)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/engine/renderer.cpp
    src/engine/vulkan_context.cpp
    src/game/game.cpp
    src/utils/logger.cpp
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link Vulkan
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan)