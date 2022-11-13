#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k,i,j, oot=0;
    scanf("%d %d", &n, &k);
    int ara[102];
    for (i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (j=1;j<=n; j++){
        if(ara[j]< k)
            oot++;
    }
    printf("%d", oot);
    return 0;
}
