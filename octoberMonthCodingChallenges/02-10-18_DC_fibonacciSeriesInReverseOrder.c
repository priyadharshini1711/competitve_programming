/*
Fibonacci Series in Reverse Order 
The program must accept an integer N as the input. The program must print the fibonacci series in the reverse order as the output. 
Boundary Condition(s): 5 <= N <= 85 
Input Format: The first line contains the value of N.
 Output Format: The first line contains the fibonacci series separated by a space. 
Example Input/Output 1:
 Input:
 5 
Output:
 3 2 1 1 0 
Example Input/Output 2: 
Input: 
+-
12 
Output: 
89 55 34 21 13 8 5 3 2 1 1 0
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   unsigned long  int a[n],i;
    long int p=-1,nt=-1,fib=0,i;
    for(i=0;i<n;i++)
    {
        fib=p+nt;
        p=nt;
        nt=fib;
        a[i]=fib;
    }
    for(i=n-1;i>=0;i--)
    cout<<a[i]<<" ";
    return 0;
}
