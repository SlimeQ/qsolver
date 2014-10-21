#include <stdio.h>

float sqrt(float x) {
	union
	{
		int i;
		float x;
	}u;

	u.x = x;
	u.i = (1<<29) + (u.i >> 1) - (1<<22);

	u.x = u.x + x/u.x;
	u.x = 0.25f*u.x + x/u.x;

	return u.x;
}

float solve_neg(float a, float b, float c) {
	float retval = ((b * -1) - sqrt(b*b - 4*a*c)) / (2*a);
	return retval;
}

float solve_pos(float a, float b, float c) {
	float retval = ((b * -1) + sqrt(b*b - 4*a*c)) / (2*a);
	return retval;
}

int main() {

	float a = 1;
	float b = 5;
	float c = 2;

	float pos = solve_pos(a,b,c);
	float neg = solve_neg(a,b,c);

	printf("a=%f\nb=%f\nc=%f\n\nroots=(%f, %f)\n", a, b, c, pos, neg);

	return 0;

}
