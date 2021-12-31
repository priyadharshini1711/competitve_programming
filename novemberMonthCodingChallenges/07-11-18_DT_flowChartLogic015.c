#include<stdio.h>
#include <stdlib.h>
int main()
{
    double m,n;
    scanf("%lf%lf",&m,&n);
    while(n>0)
    {
        m=m/10;
        n--;
    }
    printf("%0.4lf",m);
    return 0;
}
