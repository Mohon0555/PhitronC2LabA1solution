#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    //int n,r,k;
    int i,n,min=0;
    int charge[102];
    scanf("%d", &n);
    for(i=1.1; i<=n; i++)
    {
        scanf("%d%%", &charge[i]);
    }
    for(i=1.1; i<=n; i++)
    {
         if(charge[i]==0){
        min=160;
        }
       else if(charge[i]>=1 && charge[i]<=60){

            min=60-charge[i];
        min=(min*1)+100;
        }
        else if(charge[i]>60 && charge[i]<=80){
            min=80-charge[i];
        min=(min*2)+60;
        }

        else if(charge[i]>80 && charge[i]<=100){
             min=100-charge[i];
        min=min*3;
        }

        printf("%d minutes \n", min);
    }
    return 0;
}
