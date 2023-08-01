#include "window.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <log.h>

SimpleEngine::Window::Window(unsigned int width, unsigned int height, const char* title, bool resizable)
	: _winProps({ width, height, title, resizable, false })
{
	if (!glfwInit()) {
		LOG_CRIT("GLFW initialization error");
		return;
	}
	if (!_winProps.resizable) glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	_window = glfwCreateWindow(_winProps.width, _winProps.height, _winProps.title, 0, 0);
	if (!_window) {
		LOG_CRIT("Window creation error");
		return;
	}
	glfwMakeContextCurrent(_window);
	_winProps.opened = true;
}

void SimpleEngine::Window::OnUpdate()
{
	glfwSwapBuffers(_window);
	glfwPollEvents();
}
