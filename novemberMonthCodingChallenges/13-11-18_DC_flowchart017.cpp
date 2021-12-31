#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ctr=1;
    while(ctr<=n)
    {
        if(ctr<n/2)
        cout<<(2*ctr);
        else 
        cout<<(3*ctr);
        ctr++;
    }
    return 0;
}
