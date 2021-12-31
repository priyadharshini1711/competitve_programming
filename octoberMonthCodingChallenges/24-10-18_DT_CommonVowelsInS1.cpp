#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s1[1000],s2[1000];
    cin>>s1>>s2;
    int i,j;
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            for(j=0;j<strlen(s2);j++)
            {
                if(s1[i]==s2[j])
                {
                    cout<<s1[i];
                    break;
                }
            }
        }
    }
    return 0;
}
