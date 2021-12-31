#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,maxi,max=laptop[0].cost;
for(i=1;i<N;i++)
{
    if(max>laptop[i].cost)
    {
        max=laptop[i].cost;
        maxi=i;
    }
}
if(laptop[maxi].X==1)
printf("%s",laptop[maxi].nameOrNum.brandName);
else 
printf("%d",laptop[maxi].nameOrNum.productNumber);

    return 0;
}
