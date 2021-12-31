
#include <stdio.h>
int main()
{
    int left,right,divisor,count=0;
    scanf("%d %d %d", &left, &right, &divisor);
    for(int ctr = left; ctr <= right; ctr++)
    {
        if(ctr % divisor == 0)
        count++;
    }
    if(count>1)
    printf("Yes");
    else 
    printf("No");
    return 0;
} 