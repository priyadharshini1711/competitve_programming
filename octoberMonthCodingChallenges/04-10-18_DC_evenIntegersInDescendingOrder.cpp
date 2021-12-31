/*
Even Integers in Descending Order 
The program must accept a positive integer array of size N as the input. The program must print the even integers in the array in descending order as the output. 
Note: Atleast one integer is even in the array.
 Boundary Condition(s): 5 <= N <= 50 
Example Input/output 1: 
Input: 5 45 67 587 48 398 
Output: 398 48 
Example Input/Output 2:
 Input: 6 82 374 785 983 2714 9098 
Output: 9098 2714 374 82 
*/

#include <iostream>
#include <algorithm.h>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2==0)
        cout<<a[i]<<" ";
    }
    return 0;
}
