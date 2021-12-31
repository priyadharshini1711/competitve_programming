#include <iostream>
using namespace std;
int main()
{
    int m,n,temp;
    cin>>m;
    temp=m;
    n=0;
    while(temp>0)
    {
        n=(n*10)+(temp%10);
        temp=temp/10;
    }
    while(m>0)
    {
        cout<<n%10<<m%10;
        m=m/10;
        n=n/10;
    }
    return 0;
}
