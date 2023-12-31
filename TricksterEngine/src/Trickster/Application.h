#pragma once

#include "Core.h"

#include "Window.h"
#include "Trickster/LayerStack.h"
#include "Trickster/Events/Event.h"
#include "Trickster/Events/ApplicationEvent.h"

#include "Window.h"

namespace Trickster {

	class TRICKSTER_API Application
	{
	public:
		Application();
		~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);

		inline static Application& Get() { return *s_Instance; }
		inline Window& GetWindow() { return *m_Window; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	private:
		static Application* s_Instance;
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}