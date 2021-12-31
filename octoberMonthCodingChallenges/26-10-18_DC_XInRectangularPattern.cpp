#include <iostream>
 using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(j=1;j<=n;j++)
            cout<<"*";
        }
        else 
        {
            cout<<"*";
            for(j=2;j<=n-1;j++)
            {
                if(i==j)
                cout<<"*";
                else if(j==n-i+1)
                cout<<"*";
                else 
                cout<<"-";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
