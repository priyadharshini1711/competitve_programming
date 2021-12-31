#include <iostream>
using namespace std;
int main()
{
    unsigned long long int n;
    cin>>n;
    int i,a[10]={0};
    while(n>0)
    {
        a[n%10]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>i)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
