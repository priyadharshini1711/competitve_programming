#include <iostream>
#include <math.h>
 using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int cv,sum=0,ctr=1;
    while(ctr<=n)
    {
        cin>>cv;
        sum=sum+pow(x,cv);
        ctr++;
    }
    cout<<sum/x;
    return 0;
}
