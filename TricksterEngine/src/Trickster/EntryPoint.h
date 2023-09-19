#pragma once

#ifdef TS_PLATFORM_WINDOWS

extern Trickster::Application* Trickster::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Trickster::CreateApplication();
	app->Run();
	delete app;
}

#endif