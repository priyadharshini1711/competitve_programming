#include<stdio.h>
#include <stdlib.h>
int main()
{
int n,b,i,j,k;
char a[100];
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;i++)
{for(j=0;j<b;j++)
{if(j==(b/2))
 printf("%c",a[i]);
 else if(i==b/2)
 printf("%c",a[j]);
 else if((j==i)||(j==(b-1-i)))
 printf("%c",a[b-1-i]);
 else
 printf("*");
}
printf("\n");
}
}
