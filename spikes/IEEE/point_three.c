#include <stdio.h>

int main() {

	float i = 0;
	float j = 0.1;
	i = j + j + j;

	if (i == 0.3) {
		printf("the float of 0.1 + 0.1 + 0.1 is equal to 0.3\n");
	} else {
		printf("the float of 0.1 + 0.1 + 0.1 is not equal to 0.3, it is %.10f\n",i);
	}

	double k = 0;
	k = j + j + j;

	if (k == 0.3) {
		printf("the double of 0.1 + 0.1 + 0.1 is equal to 0.3\n");
	} else {
		printf("the double of 0.1 + 0.1 + 0.1 is not equal to 0.3, it is %.20lf\n",k);
	}

	return 0;
}
