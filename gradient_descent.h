/* Header file for the gradient_descent method */
#include <stdio.h>
#include <math.h>

void gradient_descent(double x0, double epsilon, double alpha, double *xmin, int niter);
double f_single(double x);
double dfdx(double x);
double f(double x, double y);
void gradient(double *grad, double *x);
