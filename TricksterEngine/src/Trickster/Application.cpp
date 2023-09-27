#include "tspch.h"
#include "Application.h"

#include "Trickster/Events/ApplicationEvent.h"
#include "Trickster/Log.h"

namespace Trickster {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		TS_TRACE(e);

		while (true);
	}

}