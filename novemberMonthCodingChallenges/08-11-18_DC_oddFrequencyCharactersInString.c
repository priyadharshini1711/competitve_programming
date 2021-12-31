#include<stdio.h>
int main()
{
    char str[101];
    int alphaCount[127] = {0}, len;
    scanf("%s%n", str, &len);
    for(int index = 0; index < len; index++)
    {
        alphaCount[str[index]]++;
    }
    for(int index = 'a'; index <= 'z'; index++)
    {
        if(alphaCount[index] % 2 != 0)
        {
                printf("%c", index);
        }
    }
}
