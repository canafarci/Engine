#pragma once

#ifdef NG_PLATFORM_WINDOWS


extern NG::Application* NG::CreateApplication();

int main(int argc, int** argv)
{
	NG::Log::Init();
	LOG_CORE_WARN("Initiazed Log");
	int a = 5;

	NG::Log::GetClientLogger()->info("Hello Var: {0}", a);

	auto app = NG::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Engine only supports Windows!
#endif