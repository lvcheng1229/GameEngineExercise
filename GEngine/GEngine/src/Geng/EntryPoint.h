#pragma once
#ifdef GE_PLATFORM_WINDOWS
extern Geng::Application* Geng::CreateApplication();
int main(int argc,char ** argv)
{
	printf("Engine Start\n");
	auto app = Geng::CreateApplication();
	app->Run();
	delete app;
}
#endif