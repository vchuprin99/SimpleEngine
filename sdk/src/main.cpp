#include <application.h>
#include <window.h>

#include <memory>

class SDK : public SimpleEngine::Application {

};

int main() {
	auto app = std::make_unique<SDK>();
	app->Construct(1280, 720, "Simple Engine SDK");
	app->Start();

	return 0;
}