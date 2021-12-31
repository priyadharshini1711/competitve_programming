#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],d[n]={0},i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        while(a[i]>0)
        {
            d[i]=d[i]+(a[i]%10);
            a[i]=a[i]/10;
        }
    }
    int j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(d[i]==d[j]&&i!=j)
            {
                d[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(d[i]!=-1)
        c++;
    }
    cout<<c;
    return 0;
}
