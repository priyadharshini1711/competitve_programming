#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char str[N][100];
    for(int wordIndex = 0; wordIndex <= N-1; wordIndex++)
    {
        scanf("%s",str[wordIndex]);
    }
    int totalRow=strlen(str[0]);
    for(int index = 0; index < totalRow; index++)
    {
        for(int wordIndex=0;wordIndex<=N-1;wordIndex++)
        {
            printf("%c", str[wordIndex][index]);
        }
        printf("\n");
    }
    return 0;
}
