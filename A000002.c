#include "oeis.h"

int A000002(int n)
{
    int m, f, x, y, i, k[10000] = {0}, v[2] = {2, 1};

    x = y = -1;
    f = i = 0;
    m = 10000;

    while (m--) {
        k[i++] = v[x & 1];
        f = y & ~(y + 1);
        x ^= f;
        y = (y+1) | (f & (x>>1));
    }

    return k[n];
}