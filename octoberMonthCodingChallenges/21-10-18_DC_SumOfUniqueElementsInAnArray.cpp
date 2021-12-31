#include <iostream>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,j;
    for(i=0;i<n;i++)
    cin>>a[i];
    int f=0,sum=0;
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
