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
    int num=b[n-1];
    for(i=n-2;i>=0;i--)
    {
        num=num*(a[i]+b[i]);
    }
    cout<<num;
    return 0;
}
