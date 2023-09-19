#include <Trickster.h>

class Sandbox : public Trickster::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Trickster::Application* Trickster::CreateApplication()
{
	return new Sandbox();
}