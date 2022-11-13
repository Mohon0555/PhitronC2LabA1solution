#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j, need, HM = 0;

    scanf("%d", &n);
    int ara_in[102];

    for (i=0; i< n; ++i)
    {
        scanf("%d", &ara_in[i]);
    }
    for (j=0; j<n; ++j)
    {
        if(ara_in[j]> HM)
        {
             HM = ara_in[j];
        }
    }
    for (k=0; k<n; ++k)
    {
        need = HM - ara_in[k];
        printf("%d ", need);
    }
    return 0;
}
