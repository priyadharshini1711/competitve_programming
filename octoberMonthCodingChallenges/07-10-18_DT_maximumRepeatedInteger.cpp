/*
Maximum Repeated Integer 
The program must accept an array of positive integers of size N as the input. The program must print the maximum repeated integer in the array as the output. If none of the integer is repeated, then print -1 as the output. 
Note: There is only one maximum repeated integer in the array.
 Boundary Condition(s): 2 <= N <= 50 1 <= Each Integer <= 99 
Example Input/Output 1:
 Input:
 5 2 3 3 2 2 
Output:
 2 


Example Input/Output 2:
 Input: 
3 12 34 56 
Output: 
-1
*/

#include <iostream>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,j;
    for(i=0;i<n;i++)
    cin>>a[i];
    int f[n]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            f[i]++;
        }
    }
    int max=0;
    j=0;
    for(i=0;i<n;i++)
    {
        if(f[i]>max)
        {
            max=f[i];
            j=i;
        }
    }
    if(max==1)
    cout<<"-1";
    else 
    cout<<a[j];
    return 0;
}
