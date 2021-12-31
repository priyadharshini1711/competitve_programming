/*
The program must accept a string S and an integer N as the input. The program must print the string as shown in the Example Input/Output section as the output. 

Boundary Condition(s): 1 <= Length of S <= 100 1 <= N <= Length of S 

Example Input/Output 1:
 Input: apple 2 
Output: ap 
Pl
 e 
Explanation: At the first line, the first 2 characters of S are ap. So, ap is printed. At the second line, the next 2 characters of S are pl. So pl is printed. At the third line, there is only one character in S, so e is printed

 Example Input/Output 2: 
Input: environment 5 
Output:
 envir 
onmen 
t
*/

#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    char s[100];
    int n;
    cin>>s>>n;
    int x=strlen(s);
    int i,j;
    for(i=0;i<x;)
    {
        for(j=0;j<n&&i<x;j++)
        {
            cout<<s[i];
            i++;
        }
        cout<<"\n";
    }
    return 0;
}
