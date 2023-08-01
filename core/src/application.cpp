#include "application.h"

SimpleEngine::Application::Application()
{

}
SimpleEngine::Application::~Application()
{

}

bool SimpleEngine::Application::Construct(unsigned int width, unsigned int height, const char* title, bool resizable)
{
	_window = std::make_unique<Window>(width, height, title, resizable);
	return true;
}

void SimpleEngine::Application::Start()
{
	OnUserInit();
	while (_window->IsOpened())
	{
		OnUserUpdate();
		_window->OnUpdate();
	}
}


