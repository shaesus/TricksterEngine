#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Trickster {

	class TRICKSTER_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };
	};

}

//Core log macros
#define TS_CORE_TRACE(...)    ::Trickster::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TS_CORE_INFO(...)     ::Trickster::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TS_CORE_WARN(...)     ::Trickster::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TS_CORE_ERROR(...)    ::Trickster::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TS_CORE_FATAL(...)    ::Trickster::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define TS_TRACE(...)		  ::Trickster::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TS_INFO(...)		  ::Trickster::Log::GetClientLogger()->info(__VA_ARGS__)
#define TS_WARN(...)		  ::Trickster::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TS_ERROR(...)		  ::Trickster::Log::GetClientLogger()->error(__VA_ARGS__)
#define TS_FATAL(...)		  ::Trickster::Log::GetClientLogger()->fatal(__VA_ARGS__)