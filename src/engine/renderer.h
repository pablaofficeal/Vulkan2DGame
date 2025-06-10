#ifndef RENDERER_H
#define RENDERER_H

#include <vulkan/vulkan.h>

class Renderer {
public:
    Renderer();
    ~Renderer();

    void init(VkDevice device, VkRenderPass renderPass, VkExtent2D extent);
    void update();
    void draw(VkCommandBuffer commandBuffer);

private:
    VkDevice device;
    VkRenderPass renderPass;
    VkExtent2D extent;

    // Additional private members for managing resources
};

#endif // RENDERER_H