#include <iostream>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int po[n],ne[n],j=0,k=0,t1,t2;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            po[j]=a[i];
            //cout<<po[j]<<"\n";
            j++;
        }
        else 
        {
            ne[k]=a[i];
            //cout<<ne[k]<<"\n";
            k++;
        }
    }
    if(j==0)
    {
        for(i=0;i<k;i++)
        cout<<ne[i]<<" ";
    }
    else if(k==0)
    {
        for(i=0;i<j;i++)
        cout<<po[i]<<" ";
    }
    else 
    {
        t1=j;
        t2=k;
        j=0;
        k=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0&&k<=t1)
            {
                cout<<ne[k]<<" ";
                k++;
            }
            else if(i%2!=0&&j<=t2)
            {
                cout<<po[j]<<" ";
                j++;
            }
            else 
            {
                cout<<a[i]<<" ";
            }
        }
    }
}