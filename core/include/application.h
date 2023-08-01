#pragma once

#include "window.h"
#include <memory>

namespace SimpleEngine {
	class Application {
	public:
		Application();
		virtual ~Application();

		bool Construct(unsigned int width, unsigned int height, const char* title, bool resizable = false);
		void Start();
	protected:
		virtual void OnUserUpdate() {}
		virtual void OnUserInit() {}

		std::unique_ptr<Window> _window;
	};
}