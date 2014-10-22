#include <stdio.h>
#include "qsolve_roots.h"
#include "qsolve_sqrt.h"


int qsolve_roots(Coef *coef, Root *root){

	root->x1 = solve_pos(coef);
	root->x2 = solve_neg(coef);

  //TODO: error conditions
  return 0;
}

float solve_neg(Coef *coef) {
	float retval = ((coef->b * -1) - qsolve_sqrt(coef->b*coef->b - 4*coef->a*coef->c))
                        / (2*coef->a);
	return retval;
}

float solve_pos(Coef *coef) {
	float retval = ((coef->b * -1) + qsolve_sqrt(coef->b*coef->b - 4*coef->a*coef->c))
                       / (2*coef->a);
	return retval;
}
