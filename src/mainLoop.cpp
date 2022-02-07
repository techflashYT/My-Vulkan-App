#include "inc/main.h"
#include <chrono>
uint8_t currentFPS = 60;
std::string a = GFX_API;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;


void mainLoop(GLFWwindow* window) {
	std::cout << "in mainLoop\r\n";
	while (!glfwWindowShouldClose(window)) {
		auto t1 = high_resolution_clock::now();
		updateTitleBar(window, currentFPS);
		glfwPollEvents();
		auto t2 = high_resolution_clock::now();

		/* Getting number of milliseconds as an integer. */
		auto ms_int = duration_cast<milliseconds>(t2 - t1);
		auto frameTime = milliseconds(16);
		std::cout << "frame took " << frameTime.count() - ms_int.count() << "ms\r\n";
		int sleepTime = frameTime.count() - ms_int.count();
		if (sleepTime >= 0) {
			Sleep(sleepTime);
		}
		else {
			std::cout << "Took longer than VSync to render frame, so immediatly start working on churning out the next\r\n";
		}
	}
}