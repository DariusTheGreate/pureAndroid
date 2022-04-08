
#define CNFG_IMPLEMENTATION
#define CNFG3D

#include "CNFG.h"

void HandleKey( int keycode, int bDown )
{
}

void HandleButton( int x, int y, int button, int bDown )
{
}

void HandleMotion( int x, int y, int mask )
{
}

void HandleDestroy()
{
}

volatile int suspended;

void HandleSuspend()
{
	suspended = 1;
}

void HandleResume()
{
	suspended = 0;
}

int main()
{
	while(1)
	{
	}

	return(0);
}

