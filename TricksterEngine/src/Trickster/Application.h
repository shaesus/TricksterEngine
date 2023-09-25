#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Trickster {

	class TRICKSTER_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}