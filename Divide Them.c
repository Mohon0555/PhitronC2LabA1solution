#include<stdio.h>

int main()
{
    int n,r,k,i;
    int roll[21];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &roll[i]);
    }
    scanf("%d", &k);
    for(r=k; r<n; r++)
    {
        printf("%d ", roll[r+1]);
    }
    for(r=0; r<k; r++)
    {
        printf("%d ", roll[r+1]);
    }


    return 0;
}
