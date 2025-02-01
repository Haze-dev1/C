//write a c program to implement various inbuilt functions of math.h library
//program:

#include <stdio.h>
#include <math.h>
int main()
{
printf("Name-Devansh Palsapure Roll no-34 \n");
double x = 2.0;
double y = 3.0;
double sin_result = sin(x);
double cos_result = cos(x);
double tan_result = tan(x);
double exp_result = exp(x);
double log_result = log(x);
double pow_result = pow(x, y);
double sqrt_result = sqrt(x);
printf("sin(%lf) = %lf\n", x, sin_result);
printf("cos(%lf) = %lf\n", x, cos_result);
printf("tan(%lf) = %lf\n", x, tan_result);
printf("exp(%lf) = %lf\n", x, exp_result);
printf("log(%lf) = %lf\n", x, log_result);
printf("pow(%lf, %lf) = %lf\n", x, y, pow_result);
printf("sqrt(%lf) = %lf\n", x, sqrt_result);
return 0;
}