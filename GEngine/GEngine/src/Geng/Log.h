#pragma once

//E6 B
#include<memory>
#include"Core.h"
#include"spdlog/spdlog.h"
namespace Geng {

	class GE_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//core log
#define GE_CORE_TRACE(...)	::Geng::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GE_CORE_INFO(...) ::Geng::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GE_CORE_WARN(...) ::Geng::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GE_CORE_ERROR(...) ::Geng::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GE_CORE_FATAL(...) ::Geng::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//client log
#define GE_CLIENT_TRACE(...) ::Geng::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GE_CLIENT_INFO(...) ::Geng::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GE_CLIENT_WARN(...) ::Geng::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GE_CLIENT_ERROR(...) ::Geng::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GE_CLIENT_FATAL(...) ::Geng::Log::GetCoreLogger()->fatal(__VA_ARGS__)
//E6 E