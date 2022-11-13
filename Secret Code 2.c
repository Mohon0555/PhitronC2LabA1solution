#include<stdio.h>

int main()
{
    int n,i,j,k,chek=0;
    int ara[101];

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for(j=1; j<=n; j++)
    {
       /* if(ara[j]==0 || ara[j]== 1)
            chek=1; */
        for(k=2; k<=ara[j]; k++)
        {
            if(ara[j]%k==0)
                chek=1;
            break;

        }
        if(chek==0)
        {
            printf("Yes \n");
        }

        else
        {
            printf("No \n");
        }
    }


    return 0;
}
