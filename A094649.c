#include "oeis.h"
#include <math.h>

int A094649(int n)
{
    return 1+pow((2*cos(M_PI/9)),n)+pow((-2*sin(M_PI/18)),n)+pow((-2*cos(2*M_PI/9)),n);
}