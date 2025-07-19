#pragma once

#ifdef NB_PLATFORM_WINDOWS
	#ifdef NB_BUILD_DLL
		#define Newborn_API __declspec(dllexport)
	#else
		#define Newborn_API __declspec(dllimport)
	#endif
#else
	#error Newborn only support Windows!
#endif