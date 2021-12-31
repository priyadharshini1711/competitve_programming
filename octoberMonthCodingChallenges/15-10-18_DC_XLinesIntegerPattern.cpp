#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int i,j;
    for(i=0;i<x;i++)
    {
        int a=n*(i+1);
        cout<<a<<" ";
        for(j=1;j<pow(2,i);j++)
        {
            cout<<a+j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
