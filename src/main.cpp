#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include "engine/vulkan_context.h"
#include "game/game.h"

int main() {
    VulkanContext vulkanContext;
    if (!vulkanContext.initialize()) {
        return -1;
    }

    Game game(&vulkanContext);
    game.run();

    vulkanContext.cleanup();
    return 0;
}