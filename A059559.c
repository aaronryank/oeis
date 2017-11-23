#include "oeis.h"
#include <math.h>

int A059559(int n)
{
    n++; // 0-indexed

    return floor(n*(1 + log(1 / 0.5772156649)));
}