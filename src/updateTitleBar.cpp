#include "inc/main.h"

void updateTitleBar(GLFWwindow* window, uint8_t currentFPS) {
	std::string a = GFX_API;
	std::string title = "Techflash's game | " + a + " | " + std::to_string(currentFPS);
	glfwSetWindowTitle(window, title.c_str());
	return;
}