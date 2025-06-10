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
    // Additional Vulkan resources like framebuffers, pipelines, etc.
};

#endif // RENDERER_H