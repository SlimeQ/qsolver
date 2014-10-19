#include <stdio.h>

int main() {

	float i = 1;
	float i_last = 0;

	while (i != 0) {
		i_last = i;
		i /= 2;
	}
	printf("machine epsilon for floats is %.150f\n",i_last);

	return 0;

}
