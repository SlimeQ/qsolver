#include <stdio.h>

int main() {

	float i = 1;

	do {
		i /= 2.0;

	} while ((1.0 + i/2.0) != 1.0);

	printf("machine epsilon for floats is %.50f\n",i);

	return 0;

}
