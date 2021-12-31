#include <iostream>
#include <string.h>
 using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='m')
        cout<<s[i];
    }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='n'&&s[i]<='z')
        cout<<s[i];
    }
    return 0;
}
