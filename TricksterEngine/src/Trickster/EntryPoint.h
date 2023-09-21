#pragma once

#ifdef TS_PLATFORM_WINDOWS

extern Trickster::Application* Trickster::CreateApplication();

int main(int argc, char** argv)
{
	Trickster::Log::Init();
	TS_CORE_WARN("Initialized Log!");
	int a = 5;
	TS_INFO("Hello! Var={0}", a);

	auto app = Trickster::CreateApplication();
	app->Run();
	delete app;
}

#endif