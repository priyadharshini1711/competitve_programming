#include <iostream>
 using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>b[i];
    int f=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[n-i-1])
        {
            cout<<a[i]<<" ";
            f=1;
        }
    }
    if(f==0)
    cout<<"-1";
    return 0;
}
