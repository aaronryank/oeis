#include "oeis.h"
#include <math.h>
#include <gsl/gsl_sf_gamma.h>

int A000023(int n)
{
    return exp(-2 * n) / (1 - n );
}