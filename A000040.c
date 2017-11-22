#include "oeis.h"

int A000040(int n)
{
    int i, j, found, x;
    n++; // 0-indexed

    for (i = 2, found = 0; found < n; i++) {
        x = 1;
        for (j = 2; j <= (i / 2); j++) {
            if (!(i % j)) {
                x = 0;
                break;
            }
        }

        if (x)
            found++;
    }

    return i - 1;
}