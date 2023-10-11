#pragma once
#include "Core.h"

namespace NG {
	class NG_API Application
	{
	public:
		Application();
		 ~Application();
		 virtual void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

