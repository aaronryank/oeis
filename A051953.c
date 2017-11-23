#include "oeis.h"

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int phi(int n)
{
    n--; // 0-indexed
    int i, res = 1;

    for (i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            res++;

    return res;
}

int A051953(int n)
{
    return n - phi(n);
}