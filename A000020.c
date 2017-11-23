#include "oeis.h"
#include <math.h>

int A000020(int n)
{
    n++; // 0-indexed

    if (n == 1)
        return 2;

    return phi(pow(2, n) - 1) / n;
}