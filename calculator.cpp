#include "calculator.h"

// a + b
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

// a - b
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// a * b
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// a / b, if b equals zero return zero
int Calculator::Div (double a, double b)
{
    return b == 0 ? 0 : a / b + 0.5;
}
