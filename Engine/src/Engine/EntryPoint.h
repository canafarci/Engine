#pragma once

#ifdef NG_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, int** argv)
{
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Engine only supports Windows!
#endif