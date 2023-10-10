#include <Trickster.h>

class ExampleLayer : public Trickster::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		TS_INFO("ExampleLayer::Update");
	}

	void OnEvent(Trickster::Event& event) override
	{
		TS_TRACE("{0}", event);
	}
};

class Sandbox : public Trickster::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Trickster::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

Trickster::Application* Trickster::CreateApplication()
{
	return new Sandbox();
}