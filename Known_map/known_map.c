#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "known_map.h"


float known_map()
{
	clock_t time;
	float v,t;
	v=0.5;
	time=clock();
	t = (float)(time - 0) / CLOCKS_PER_SEC;
	printf("%.3fs\t%.3fm\t",t,v*t);
	if (v*t < L1)									return L;					
	else if (v*t < L1+4*R1)					return -50;
	else if (v*t < L1+5*R1)					return 50;
	else if (v*t < L1+7*R1)					return -50;
	else if (v*t < L1+9*R1)					return 50;
	else if (v*t < L1+11*R1)				return -50;
	else if (v*t < L1+12*R1)				return 50;
	else if (v*t < L1+12*R1+L2)			return L;
	else if (v*t < L1+14*R1+L2)			return -50;
	else if (v*t < L1+14*R1+L2+L3)	return L;
	else 	return 0;
}