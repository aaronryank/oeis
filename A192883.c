#include "oeis.h"
#include <math.h>

int A192883(int n)
{
    return (pow(2,(-1-n))*(7*pow(-1,n)*pow(2,(1+n))+pow((3-sqrt(5)),(1+n))+pow((3+sqrt(5)),(1+n))))/5;
}