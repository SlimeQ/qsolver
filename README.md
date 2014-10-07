qsolver
=======

homework project to solve quadratic equations

quadratic equations take the form of
ax^2 + bx + c = 0

for example, you can google the term "5x^2 + 2x - 10" to get a visual graph.
we can apply the quadratic formula to find the roots.

The previous example has roots at 1.2282856857085702 and -1.6282856857085701.

the quadratic formula takes the form of:
(-b + sqrt(b^2 - 4ac) ) / (2a)
(-b - sqrt(b^2 - 4ac) ) / (2a)

It is also possible for an equation to have imaginary roots, however we
will not cover this.

caveats:
some limitations on the upper and lower bounds. for example,
b^2 - 4ac may be a number that can be held by a int. However, can b^2?
We are free to manipulate the order that we handle math, if it is better.
