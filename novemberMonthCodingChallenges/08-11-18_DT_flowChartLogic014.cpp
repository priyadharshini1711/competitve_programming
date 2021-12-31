#include <iostream>
 using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=1,res=0;
    while(n>0)
    {
        res=res+((n%10)*p);
        p=p*2;
        n=n/10;
    }
    cout<<res;
    return 0;
}
