#include <stdlib.h>
#include <stdio.h>
#include "oeis.h"

#ifndef sequence
# define sequence A000040
#endif

int main(int argc, char **argv)
{
    int n = atoi(argv[1]);

    printf("%d, ",sequence(n));
}