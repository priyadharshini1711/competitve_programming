#include <iostream>
#include <string.h> 
using namespace std;
int main()
{
    char s[10000];
    cin>>s;
    int i,x;
    x=strlen(s);
    int f[26]={0};
    for(i=0;i<x;i++)
    {
       f[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(f[i]%2!=0)
        cout<<char('a'+i);
    }
    for(i=25;i>=0;i--)
    {
        if(f[i]!=0&&f[i]%2==0)
        cout<<char('a'+i);
    }
    return 0;
}
