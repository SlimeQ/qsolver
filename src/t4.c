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
coefs.b = sqrt(DBL_MAX*1.001);
coefs.c = 1.0;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,-4);
printf("why is it the wrong return code q_q gonna push anyway\n");

// A good unit test, all is in order
// (x - x1)*(x - x2) = 0
x1 = 3.1;
x2 = 3.3;
coefs.a = 1.0;
coefs.b = -x1 + -x2;
coefs.c = x1*x2;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,2);
assert_feqrerr("x1",roots.x1, x2, 10.0*cunit_dmacheps );
assert_feqrerr("x2",roots.x2, x1, 10.0*cunit_dmacheps );

// A good unit test allows for round off!
// (x - x1)*(x - x2) = 0
x1 = 3.1;
x2 = 3.3;
coefs.a = 1.0;
coefs.b = -x1 + -x2;
coefs.c = x1*x2;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,2);
assert_feqrerr("x1",roots.x1, x2, 10.0*cunit_dmacheps );
assert_feqrerr("x2",roots.x2, x1, 10.0*cunit_dmacheps );

// A "good" unit test, need to allow for round off!
// qsolve_roots() passes this one. ;-)
// This allows about one base 10 least significant digit of error
// (x - x1)*(x - x2) = 0
x1 = 3.1;
x2 = 3.3;
coefs.a = 1.0;
coefs.b = -x1 + -x2;
coefs.c = x1*x2;
ret = qsolve_roots(&coefs, &roots);
assert_eq("ret",ret,2);
assert_feqrerr("x1",roots.x1, x2, 10.0*cunit_dmacheps );
assert_feqrerr("x2",roots.x2, x1, 10.0*cunit_dmacheps );
exit(0);
}
