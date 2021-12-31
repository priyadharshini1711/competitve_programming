#include <iostream>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n],i,j;
    int c=0;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i][j]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i+1][j+1]==1)
            c++;
        }
    }
    cout<<c;
    return 0;
}
