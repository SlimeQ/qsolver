/*
* t1.c
* Unit tests for quad_roots() 
* solves a * x^2 + b x + c = 0
*   for the roots
* x1 and x2
* *
* This uses the qsolve_sqrt() which calls the system sqrt()
*/
#include <stdlib.h>
#include <math.h>
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

//  a = 0, not a true qudratic. should return -1
coefs.a = 0;
coefs.b = 2.0;
coefs.c = 1.0;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-1);

// d = b^2 - 4ac < 0; no real roots. should return -2
coefs.a = 6.4;
coefs.b = 5.0;
coefs.c = 7.7;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-2);

// NAN input; should return -3
coefs.a = NAN;
coefs.b = 2.0;
coefs.c = 1.0;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-3);

// INF input; should return -3
coefs.a = 2.0;
coefs.b = INF;
coefs.c = 1.0;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-3);

exit(0);
}
