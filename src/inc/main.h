#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <cstdint>
#include <Windows.h>
#include <vector>

#include "defines.h"

void updateTitleBar(GLFWwindow* window, uint8_t currentFPS);
void cleanup(const bool enableValidationLayers, VkInstance instance, GLFWwindow* window, VkDebugUtilsMessengerEXT debugMessenger);
void mainLoop(GLFWwindow* window);
void createInstance(bool enableValidationLayers, VkInstance instance, std::vector<const char*> validationLayers);
void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
std::vector<const char*> getRequiredExtensions(bool enableValidationLayers);
bool checkValidationLayerSupport(std::vector<const char*> validationLayers);
VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(msgSeverityBitsEXT messageSeverity, dbgMsgTypeFlagsEXT messageType, const dbgMsgCallbackDataEXT* pCallbackData, void* pUserData);
