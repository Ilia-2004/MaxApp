#include "pch.h"
#include <math.h>

// подинтегральная функция
double F(double x)
{
    return log(x + 1) / log10(sqrt(x) + 1);
}

// метод прямоугольника
double integrate(double (*f)(double), double a, double b)
{
    if (a <= 0 || b <= 0) 
        return NULL;

    int n = 10;
    double sum = 0;
    double h = (b - a) / n;

    for (int i = 0; i < n; i++)
    {
        double x = a + (i + 0.5) * h;
        sum += f(x);
    }

    return sum * h;
}

int main()
{
	return 0;
}