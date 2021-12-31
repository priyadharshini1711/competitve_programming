#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch1,ch2;
    char i;
    scanf("%c %c",&ch1,&ch2);
    if(ch1=='U' || ch1=='u')
    {
        for(i='A';i<='Z';i++)
        {
            if(i==ch2 || i==(ch2-32))
            continue;
            else
            printf("%c ",i);
        }
    }
else if(ch1=='l' || ch1=='L')
{
    for(i='a';i<='z';i++)
    {
        if(i==ch2 || i==(ch2+32))
        continue;
        else
        printf("%c ",i);
    }
}
else
{
    printf("INVALID");
}
return 0;
}
