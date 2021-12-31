/*
Maximum number of digits
Given  a digit n find the maximum number of occurring digit in n;
Input:
122233451226547893
Output:
2
Input
33366666665555888899991272456666
Output:
 6
*/

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int a[10]={0},s,i;
    while(n>0)
    {
        s=n%10;
        a[s]=a[s]+1;
        n=n/10;
    }
    int max=0,maxi;
    for(i=0;i<10;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
            maxi=i;
        }
    }
    cout<<maxi;
    return 0;
}
