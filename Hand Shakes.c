#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int n,shake=0;
    scanf("%lli", &n);
    shake = n*(n-1)/2;
    printf("%d", shake);
    return 0;
}

