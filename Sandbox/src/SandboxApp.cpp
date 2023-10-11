#include <NG.h>


class Sandbox : public NG::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

NG::Application* NG::CreateApplication()
{
	return new Sandbox();
}