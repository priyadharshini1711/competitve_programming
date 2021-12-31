#include <stdio.h>
int main()
{
    int n,max,ctr,curr;
    scanf("%d %d",&n,&max);
    for(ctr=2; ctr<=n;ctr++)
    {
        scanf("%d",&curr);
        if(curr>max)
        {
            max=curr;
        }
    }
    printf("%d",max);
    return 0;
}
