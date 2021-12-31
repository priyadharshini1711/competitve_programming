#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char s[101];
    cin>>s;
    int x=strlen(s);
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(abs(s[i]-s[j])==abs(i-j))
            cout<<s[i]<<s[j];
        }
    }
    return 0;
}
