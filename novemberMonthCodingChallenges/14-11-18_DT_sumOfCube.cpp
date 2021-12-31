/*
Given a number n. print the sum of cube of all the numbers starting from 1 to N
*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int ctr=1;
    while(ctr<=n)
    {
        sum=sum+(int)(ctr*ctr*ctr);
        ctr++;
    }
    cout<<sum;
    return 0;
}
