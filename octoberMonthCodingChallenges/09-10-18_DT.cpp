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
