#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][1000];
    int i,j,c[n]={0};
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(a[i]);j++)
        {
            if(a[i][j]=='-')
            c[i]++;
        }
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        if(c[i]>=max)
        {
            max=c[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(c[i]==max)
        cout<<i+1<<” “;
    }
    return 0;
}
