#pragma once
#include"Core.h"
namespace Geng {
	class GE_API Application
	{
	public:
		void Run();
		Application();
		virtual ~Application();
	};
	Application* CreateApplication();

}
