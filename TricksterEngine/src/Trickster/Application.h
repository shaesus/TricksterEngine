#pragma once

#include "Core.h"

namespace Trickster {

	class TRICKSTER_API Application
	{
	public:
		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}