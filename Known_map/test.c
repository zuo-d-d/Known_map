#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "known_map.h"

int main()
{
	float r;
	while (1){
		r=known_map();
		printf("%.0f\n",r);
		if (r==0) break;
	}
	printf("END\n");
	system("pause");
	return 0;
}