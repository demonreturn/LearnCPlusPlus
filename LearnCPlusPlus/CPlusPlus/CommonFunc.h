
#ifndef _COMMON_FUNC_H_
#define _COMMON_FUNC_H_

#define COM_FUNC_NAME COMMONFUNC::

#include <Windows.h>

namespace COMMONFUNC
{
	static double GetCPUTick()
	{
		LARGE_INTEGER frequency;
		QueryPerformanceFrequency( &frequency );
		LARGE_INTEGER timeCount;
		QueryPerformanceCounter( &timeCount );
		return (double)( timeCount.QuadPart * 1000.0 / frequency.QuadPart );
	}
}

#endif //_COMMON_FUNC_H_

