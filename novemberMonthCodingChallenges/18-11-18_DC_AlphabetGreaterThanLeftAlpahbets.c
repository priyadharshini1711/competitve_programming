#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[101], lastPrinted;
    scanf("%s",str);
    int j=1,f=0;
    printf("%c",str[0]);
    while(j<strlen(str))
    {
        f=0;
        lastPrinted=str[j];
        for(int index=j; index>=0; index--)
        {
            
            if(str[index]>lastPrinted)
            {
                lastPrinted=str[j];
                f=1;
            }
        }
        if(f==0)
        printf("%c",lastPrinted);
        j++;
    }
    return 0;
}
