/*
Anagram 
Given two strings S1 and S2 as input containing only alphabets, the program must print YES if S1 is an anagram of S2. Else the program must print NO.
 Note: Two words are anagram of one another if their letters can be rearranged to form the other word. Boundary Condition(s): 1 <= Length of S1 <= 1000 1 <= Length of S2 <= 1000 
Input Format: 
The first line contains the string S1. The second line contains the string S2. 
Output Format: 
The first line contains the string YES or NO. 
Example Input/Output 1:
 Input: 
stool 
tools 
Output: YES 
Explanation : All the characters in the string S1 are present in the string S2. 
Example Input/Output 2:
 Input: 
state 
tasty 
Output: 
NO 
Explanation : The character 'e' in string S1 is not present in the string S2 and the character 'y' is not present in the string S1.
*/

#include <iostream>
#include <string.h>
 using namespace std;
int main()
{
    char s1[1000],s2[1000];
    cin>>s1>>s2;
    int x,y,i,j;
    x=strlen(s1);
    y=strlen(s2);
    int c=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(s1[i]==s2[j])
            {
                s2[j]=-1;
                c++;
                break;
            }
        }
    }
    if(c==x)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}
