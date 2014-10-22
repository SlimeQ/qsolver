/*
* t4.c
* unit tests for qsolve(), boundry tests
* *
*/
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "cunit.h"
#include "qsolve_roots.h"


int main() {
Coef    coefs;   // a, b and c for the quadratic eqaution
Root    roots;   // Root struct with x1 and x1
int ret;     // return value from qsolve_roots
// double  a, b, c; // scratch variables
double  x1, x2;  // scratch variables


// initialize the unit testing framework
cunit_init();

//test the max value for b
coefs.a = 1.0;
coefs.b = DBL_MAX/2;
coefs.c = 1.0;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-4);

//test the max value for a
x1 = 1.0;
x2 = 3.3;
coefs.a = DBL_MAX;
coefs.b = -x1 + -x2;
coefs.c = x1*x2;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-2);

//test the max value for c
x1 = 3.1;
x2 = 3.3;
coefs.a = 1.0;
coefs.b = -x1 + -x2;
coefs.c = DBL_MAX;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-2);


exit(0);
}
