#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long int a[100];
    int i;
    long int p=-1,l=1,fib,b[50];
    int j,k=0,f=0;
    for(i=2;i<200&&k<50;i++)
    {
        f=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            b[k]=i;
            //cout<<b[k];
            k++;
        }
    }
    k=0;
    for(i=0;i<100;i++)
    {
        if(i%2==0)
        {
            fib=p+l;
            p=l;
            l=fib;
            a[i]=fib;
        }
        else
        {
            a[i]=b[k];
            k++;
        }
    }
    cout<<a[n-1];
    return 0;
}
