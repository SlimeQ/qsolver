#include "test.h"

//ugly global variables!
float a,b,c,disc,x1,x2;

int input() {
	scanf("%f %f %f",&a,&b,&c);
	return 0;
}
int output() {
	printf("roots are %f and %f\n",x1,x2);
	return 0;
}
float discriminant(float a, float b, float c) {
	return (b * b) - (4 * a * c);
}

int main() {
	input();
	disc = discriminant(a,b,c);
	if (DEBUG) printf("the discriminant is %f\n",disc);

	x1 = (-b + sqrt(disc))/(2*a);
  x2 = (-b - sqrt(disc))/(2*a);

  output();

	return 0;
}
