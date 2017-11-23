#include "oeis.h"
#include <math.h>

int A000008(int n)
{
    double q = floor(n / 10);
    double h = round(pow(n + 4, 2) / 20);

    return (q + 1) * (h - (q * ((3 * n) - (10 * q) + 7) / 6));
}