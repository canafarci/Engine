#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"


namespace NG
{
	class NG_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return _coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return _clientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> _coreLogger;
		static std::shared_ptr<spdlog::logger> _clientLogger;
	};
}

#define LOG_CORE_TRACE(...)  ::NG::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LOG_CORE_INFO(...)	::NG::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LOG_CORE_WARN(...)	::NG::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LOG_CORE_ERROR(...)	::NG::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LOG_CORE_FATAL(...)	::NG::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define LOG_TRACE(...)  ::NG::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LOG_INFO(...)	::NG::Log::GetClientLogger()->info(__VA_ARGS__)
#define LOG_WARN(...)	::NG::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...)	::NG::Log::GetClientLogger()->error(__VA_ARGS__)
#define LOG_FATAL(...)	::NG::Log::GetClientLogger()->fatal(__VA_ARGS__)

