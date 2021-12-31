#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c],i,j,z1[r]={0};
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                z1[i]++;
            }
        }
    }
    int min,mini;
    for(i=0;i<r;i++)
    {
        min=9999;
   for(j=0;j<r;j++)
        {
            if(min>z1[j])
            {
                min=z1[j];
                mini=j;
            }
        }
        cout<<mini+1;
        z1[mini]=9999;
    }
    return 0;
}