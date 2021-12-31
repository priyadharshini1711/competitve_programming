#include<stdio.h>
int main()
{
    int N, count=0;
    scanf("%d", &N);
    for(int X = 0; X <= N; X++)
    {
        if((N^X) == (N|X))
        {
            count++;
        }
    }
    printf("%d", count);
}