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