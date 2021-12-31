/*
Count of Punctuations 
The program must accept a string S as the input. The program must print the count of punctuations in S as the output.
 Note: Punctuation characters are , . ? ! ' " : ; ... -. 
Hint: Use ispunct() function. 

Boundary Condition(s): 5 <= Length of String S <= 99 

Example Input/Output 1: 
Input:
 Hello everyone, how are you? 
Output:
 2 

Example Input/Output 2: 
Input:
 listen here.
 Output:
 1
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    cin.get(s,100);
    int i,c=0;
    for(i=0,i<strlen(s);i++)
    {
        if(ispunct(s[i]))
        c++;
    }
    cout<<c;
    return 0;
}
