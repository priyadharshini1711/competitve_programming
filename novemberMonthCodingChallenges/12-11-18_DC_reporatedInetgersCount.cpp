#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int j,c=0,f=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j&&a[i]==a[j]&&a[i]!=-1)
            {
                a[j]=-1;
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}