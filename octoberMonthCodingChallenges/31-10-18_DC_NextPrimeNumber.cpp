/*
Given a number n find the next prime number to the given number.
Input:
4
Output:
5
Input:
7
Output: 
11
*/

#include <iostream>
 using namespace std;

bool is_prime(long long int n)
 {
    long long int k=2;
    for(;k*k<=n;k+=1)
    {
        if(n%k==0)
        {
        return 0;
        }
    }
    return 1;
 }
 
int main()
{
    long long int n,i;
    cin>>n;
    if(n%2!=0){
        i=n+2;
    }
    else
    {
        i=n+1;
    }
    while(!is_prime(i))
    {
        i+=2;
    }
    cout<<i;
}
