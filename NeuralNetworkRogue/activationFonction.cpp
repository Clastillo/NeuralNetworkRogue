#include <iostream>
#include <math.h>
#include "activationFonction.h"

const double E = 2.718281828459045235360;
const double RELU_LEAK = 0.01;

//Binary step
double binary(double d)
{
	if (d < 0) return 0;
	else return 1;
}

//Sigmoid
double sigmoid(double d)
{
	return (1 / (1 + pow(E, -d)));
}

double sigmoid_Derivative(double d)
{
	double tmp = sigmoid(d);
	return(tmp*(1 - tmp));
}

//Tanh
double tanh(double d)
{
	double tmp1 = pow(E, d);
	double tmp2 = pow(E, -d);
	return((tmp1-tmp2) / (tmp1+tmp2));
}

double tanh_Derivative(double d)
{
	return(1 - pow(tanh(d),2));
}

//RELU
double relu(double d)
{
	if (d < 0) return RELU_LEAK*d;
	else return d;
}

double relu_derivative(double d)
{
	if (d < 0) return RELU_LEAK;
	else return 1;
}
