#pragma once
#include"Core.h"
//E5 Begin
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
//E5 End