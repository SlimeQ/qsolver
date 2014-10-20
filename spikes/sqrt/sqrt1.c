#include <stdio.h>

int main(){

	union
	{
		int i;
		float x;
	}u;
	const float x = 1;

	u.x = x;
	u.i = (1<<29) + (u.i >> 1) - (1<<22);

	u.x = u.x + x/u.x;
	u.x = 0.25f*u.x + x/u.x;

	printf("sqrt of %f is %f\n", x, u.x);
}
