#pragma once

#ifdef TOY_PLATFORM_WINDOWS
	#ifdef TOY_BUILD_DLL
		#define TOY_API _declspec(dllexport)
	#else
		#define TOY_API _declspec(dllimport)
	#endif
#else
	#error Only windows
#endif