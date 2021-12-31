#include<stdio.h>
#include <stdlib.h>
int main()
{
    float g,m,r;
    scanf("%f\t%f\t%f\t",&g,&m,&r);
    g=sqrt((2*g*m)/r);
    printf("%.3f",g);
    return 0;
}
