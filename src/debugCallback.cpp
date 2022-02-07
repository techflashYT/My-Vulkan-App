#include "inc/main.h"

VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(msgSeverityBitsEXT messageSeverity, dbgMsgTypeFlagsEXT messageType, const dbgMsgCallbackDataEXT* pCallbackData, void* pUserData) {

	if (messageSeverity >= VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT) {
		// Message is important enough to show
		std::cerr << "validation layer: " << pCallbackData->pMessage << std::endl;
	}

	return VK_FALSE;
}