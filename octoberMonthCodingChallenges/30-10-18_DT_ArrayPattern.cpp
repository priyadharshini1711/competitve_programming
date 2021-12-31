#include <iostream>
 using namespace std;
int main()
{	
    int n;
    cin>>n;
    int i,j;
    int r=(n*2)-1;
    for(i=1;i<=r;i++)
    {
        if(i==1||i==r)
        {
            for(j=1;j<n;j++)
            cout<<"*";
            cout<<"0";
        }
        else if(i<=n)
        {
            for(j=1;j<=n;j++)
            {
                if(j==(n-i)+1||j==n)
                cout<<"0";
                else 
                cout<<"*";
            }
        }
        else 
        {
            for(j=1;j<=n;j++)
            {
                if(j==(i-n)+1||j==n)
                cout<<"0";
                else 
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}