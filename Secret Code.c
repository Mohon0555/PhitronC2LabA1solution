#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j,chek=0;
    int ara[101];

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);

        for(j=1; j<=n; j++)
        {
            if(ara[j]%2==0)
            {
                chek++;
            }
        }

        if(chek==2)
        {
            printf("Yes \n");
        }
        if(chek>3)
        {
            printf("No \n");
        }
    }
    return 0;
}
