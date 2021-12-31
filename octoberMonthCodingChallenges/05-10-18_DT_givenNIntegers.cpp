/*
Given N integers 
Print the even numbers in forward direction and odd numbers in reverse direction.
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        cout<<a[i]<<" ";
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2!=0)
        cout<<a[i]<<" ";
    }
    return 0;
}
