#include "Sin.h"
#include <cmath>

double Sinus(double j)
{
    double e = 0.0001;
    double r, i = j;
    double c = j;
    int k = 1;
    while (abs(i) > e)
    {
        r = - j * j / (2 * k * ( 2 * k + 1));
        i *=r;
        c +=i;
        k++;
    }
    return c;
}