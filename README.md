# Vulkan 2D Game

## Overview
This project is a 2D game developed using C++ and Vulkan. It serves as a foundation for creating a simple yet extensible game engine that utilizes Vulkan for rendering graphics.

## Project Structure
```
vulkan-2d-game
├── src
│   ├── main.cpp
│   ├── engine
│   │   ├── renderer.cpp
│   │   ├── renderer.h
│   │   ├── vulkan_context.cpp
│   │   └── vulkan_context.h
│   ├── game
│   │   ├── game.cpp
│   │   └── game.h
│   └── utils
│       ├── logger.cpp
│       └── logger.h
├── include
│   ├── engine
│   │   ├── renderer.h
│   │   └── vulkan_context.h
│   ├── game
│   │   └── game.h
│   └── utils
│       └── logger.h
├── CMakeLists.txt
└── README.md
```

## Getting Started

### Prerequisites
- C++17 or later
- CMake
- Vulkan SDK

### Building the Project
1. Clone the repository:
   ```
   git clone <repository-url>
   cd vulkan-2d-game
   ```

2. Create a build directory:
   ```
   mkdir build
   cd build
   ```

3. Run CMake to configure the project:
   ```
   cmake ..
   ```

4. Build the project:
   ```
   cmake --build .
   ```

### Running the Game
After building the project, you can run the game executable located in the build directory.

## File Descriptions
- **src/main.cpp**: Entry point of the application. Initializes the Vulkan context and starts the game loop.
- **src/engine/renderer.cpp**: Implementation of the Renderer class responsible for rendering objects on the screen using Vulkan.
- **src/engine/renderer.h**: Declaration of the Renderer class, including methods for initialization, updating, and rendering the scene.
- **src/engine/vulkan_context.cpp**: Implementation of the VulkanContext class that manages Vulkan initialization and setup.
- **src/engine/vulkan_context.h**: Declaration of the VulkanContext class, including methods for device creation, image swapping, and resource management.
- **src/game/game.cpp**: Implementation of the Game class that manages game logic, including object initialization and event handling.
- **src/game/game.h**: Declaration of the Game class, including methods for starting the game, updating state, and handling input.
- **src/utils/logger.cpp**: Implementation of the Logger class responsible for logging events and errors in the application.
- **src/utils/logger.h**: Declaration of the Logger class, including methods for logging messages with various severity levels.
- **include/engine/renderer.h**: Header file for the Renderer class, accessible to other modules.
- **include/engine/vulkan_context.h**: Header file for the VulkanContext class, accessible to other modules.
- **include/game/game.h**: Header file for the Game class, accessible to other modules.
- **include/utils/logger.h**: Header file for the Logger class, accessible to other modules.
- **CMakeLists.txt**: Configuration file for CMake, defining how to compile the project and its dependencies.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.