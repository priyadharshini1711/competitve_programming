#include <iostream>
 using namespace std;
int main()
{
    int n,v,i,ac=0;
    cin>>n>>v;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]!=v)
        ac++;
    }
    cout<<ac;
    return 0;
}