#pragma once
//E5 Begin
#ifdef GE_PLATFORM_WINDOWS
extern Geng::Application* Geng::CreateApplication();
int main(int argc,char ** argv)
{
	printf("Engine Start\n");

	Geng::Log::Init();
	GE_CORE_WARN("Core Logger Init");
	GE_CLIENT_INFO("Client Logger Init");

	auto app = Geng::CreateApplication();
	app->Run();
	delete app;
}
#endif
//E5 End