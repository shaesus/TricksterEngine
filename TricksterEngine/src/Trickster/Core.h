#pragma once

#ifdef TS_PLATFORM_WINDOWS
	#ifdef TS_BUILD_DLL
		#define TRICKSTER_API __declspec(dllexport)
	#else
		#define TRICKSTER_API __declspec(dllimport)
	#endif	
#else 
	#error Trickster only supports Windows!
#endif

#ifdef TS_ENABLE_ASSERTS
	#define TS_ASSERT(x, ...) { if (!x) } { TS_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define TS_CORE_ASSERT(x, ...) { if (!x)) { TS_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define TS_ASSERT(x, ...)
	#define TS_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)