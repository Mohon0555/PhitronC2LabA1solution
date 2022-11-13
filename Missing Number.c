#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,i,c,a,b,s,mis;
    scanf("%d", &t);

    for(i=1;i<=t;i++){
        scanf("%d %d %d %d", &s, &a,&b,&c);
         mis=(s-(a+b+c));
         printf("%d \n", mis);
    }



}
