/* include files */
#include "gradient_descent.h"

int main()
{
   
	/* Defining variables */
	double x0 = 2.0; /* x0 is the starting value */
	double epsilon = 1.0e-04; /* epsilon is the tolerance of the gradient about zero */
	double alpha = 0.1; /* alpha is the learning rate */
	double xmin; /* xmin will hold the value of x which approximately minimizes f */
	int niter = 50;
		
	/* Checking the values of x0 and epsilon */
   printf("x0 = %f, epsilon = %f\n", x0, epsilon);

   gradient_descent(x0, epsilon, alpha, &xmin, niter);

   /* Printing the value of xmin */
   printf("x0 = %f\n", xmin);
   
   return 0;
}


