#ifndef VULKAN_CONTEXT_H
#define VULKAN_CONTEXT_H

#include <vulkan/vulkan.h>
#include <vector>

class VulkanContext {
public:
    VulkanContext();
    ~VulkanContext();

    void init();
    void cleanup();

    VkDevice getDevice() const;
    VkPhysicalDevice getPhysicalDevice() const;
    VkInstance getInstance() const;

private:
    void createInstance();
    void pickPhysicalDevice();
    void createLogicalDevice();

    VkInstance instance;
    VkPhysicalDevice physicalDevice;
    VkDevice device;

    std::vector<const char*> validationLayers;
    bool enableValidationLayers;
};

#endif // VULKAN_CONTEXT_H