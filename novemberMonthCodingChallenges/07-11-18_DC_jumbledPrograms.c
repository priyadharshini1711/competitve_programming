#include<stdio.h>
int isVowel(char ch)
{ 
    ch = tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
int main()
{
    char str[101];
    int len, printFlag=0;
    scanf("%s%n", str, &len);
    for(int index=len-1 ; index>=0; index--)
    {
        if(isVowel(str[index]))
        {
            printf("%c",str[index]);
            printFlag=1;
        }
    }
    if(printFlag == 0)
    {
        printf("-1");
    }
    return 0;
}
