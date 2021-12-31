#include<stdio.h>
int main()
{
    int N, median, value, totalValue;
    scanf("%d %d", &N, &value);
    median = value;
    totalValue = value;
    for(int ctr = 2; ctr <= N; ctr=ctr+1)
    {
        scanf("%d", &value);
        totalValue=totalValue+value;
        if(median > (totalValue / ctr))
        {
            median = totalValue / ctr;
        }
    }
    printf("%d", median);
} 
