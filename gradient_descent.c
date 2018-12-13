/* This file contains the method for the gradient descent algorithm */
#include "gradient_descent.h"

void gradient_descent(double x0, double epsilon, double alpha, double *xmin, int niter) {

	int k = 0; /* k will track the iteration number */
	double x = x0;
	double abs_dfdx_current = fabs(dfdx(x0));
	/* double dx = 0.5*dfdx(x0); */
	double dx = alpha*dfdx(x0);

	
	while (abs_dfdx_current >= epsilon && k < niter) {
		x = x - dx; 
		abs_dfdx_current = fabs(dfdx(x));
		k = k+1;
		// dx = 0.5*dfdx(x);
		dx = alpha*dfdx(x);
	}
	

	*xmin = x;
}



/* Defining the f_single convex function to plug into the gradient descent algorithm */
double f_single(double x) {
	return x*x;
}

/* Defining the derivative of the function f */
double dfdx(double x) {
	return 2.0*x;
}


/* Defining the convex function to plug into the gradient descent algorithm */
double f(double x, double y) {
	return 4.0*x*x - 4.0*x*y + 2*y*y;
}

/* Defining the gradient, stored in grad, of the function f at value stored in x */
void gradient(double *grad, double *x) {
	grad[0] = 8.0*x[0] - 4.0*x[1];
	grad[1] = -4.0*x[0] + 4.0*x[1];
}