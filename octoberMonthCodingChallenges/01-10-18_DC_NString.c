/*
The program must accept N string values as the input. If the first characters of N string values are equal and also the last characters of N string values are equal, then the program must print YES as the output. Else the program must print NO as the output. For alphabets the comparison must NOT be case sensitive. 
Boundary Condition(s): 1 <= N <= 50 1 <= Length of each string <= 100 
Example Input/Output 1: 
Input: 
3 
Apple 
Arrange 
abstractable 
Output: YES 
Example Input/Output 2:
 Input:
 2 
mango 
morning 
Output: NO
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,i,j;
    char s[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    a=strlen(s[0]);
    for(i=1;i<n;i++)
    {
        b=strlen(s[i]);
        if(tolower(s[0][0])!=tolower(s[i][0])||tolower(s[0][a-1])!=tolower(s[i][b-1]))
        {
            printf("NO");
            exit(0);
        }
    }
    printf("YES");
}
