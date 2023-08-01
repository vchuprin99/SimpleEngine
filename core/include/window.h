#pragma once

#include <functional>

struct GLFWwindow;
namespace SimpleEngine {
	class Window {
	public:
		Window(unsigned int width, unsigned int height, const char* title, bool resizable);

		void OnUpdate();
		inline bool IsOpened() { return _winProps.opened; }
	private:
		struct WinProps {
			unsigned int width;
			unsigned int height;
			const char* title;
			bool resizable;

			bool opened;
		} _winProps;


		GLFWwindow* _window = nullptr;
	};
}