#pragma once

#ifdef NB_PLATFORM_WINDOWS

extern Newborn::Application* Newborn::CreateApplication();
int main(int argc, char** argv) 
{
	auto app = Newborn::CreateApplication();
	app->Run();
	delete app;
}

#endif // 
