#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    char s[200];
    cin>>s;
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        cout<<s[i];
    }
    for(i=0;i<strlen(s);i++)
    {
        char c=tolower(s[i]);
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
        cout<<s[i];
    }
    return 0;
}