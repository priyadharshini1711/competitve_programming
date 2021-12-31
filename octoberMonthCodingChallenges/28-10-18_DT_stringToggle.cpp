/*
Given a string toggle between the vowel characters at odd positions
Sample input:
Apple
Output
applE
Sample input:
ELEPHANT
Output:
eLePHANT
*/

#include <iostream>
#include <string.h>
 using namespace std;
int main()
{
    char s[1000];
    cin>>s;
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'&&i%2==0)
        {
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
            else 
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}