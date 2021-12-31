#include<stdio.h>
int main()
{
    int n, ctr=0, till;
    scanf("%d",&n);
    till=n%10;
    if(till!=0)
    ctr++;
    while(ctr<=till)
    {
        printf("%d",ctr--);
        ctr++;
        ctr++;
    }
}
