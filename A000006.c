#include "oeis.h"

int A000006(int n)
{
    return A000196(A000040(n));
}