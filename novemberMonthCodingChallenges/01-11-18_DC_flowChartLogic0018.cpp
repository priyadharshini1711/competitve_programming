#include <iostream>
 using namespace std;
int main()
{
    int n,ctr=0,val=1;
    cin>>n;
    while(val<=n)
    {
        val=val*10;
        ctr++;
    }
    cout<<ctr;
    return 0;
}