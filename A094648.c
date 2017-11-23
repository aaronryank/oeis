#include "oeis.h"
#include <math.h>

int A094648(int n)
{
    return pow((2*sin(3*M_PI/14)),n)+pow((-2*sin(M_PI/14)),n)+pow((-2*cos(M_PI/7)),n);
}