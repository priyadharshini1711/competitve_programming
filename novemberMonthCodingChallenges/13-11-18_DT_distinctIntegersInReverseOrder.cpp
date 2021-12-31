#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int j;
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j&&a[i]==a[j])
            {
                a[j]=-1;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!=-1)
        cout<<a[i]<<" ";
    }
    return 0;
}
