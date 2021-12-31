#include <iostream>
 using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c],i,j;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>a[i][j];
    int l=(r-1)*(c-1);
    int sum[l]={0};
    int k=0;
    for(i=0;i<r-1;i++)
    {
        for(j=0;j<c-1;j++)
        {
            sum[k]=a[i][j]+a[i+1][j]+a[i+1][j+1];
            k++;
        }
    }
    k=0;
    for(i=0;i<l;i++)
    {
        if(k<sum[i])
        k=sum[i];
    }
    cout<<k;
    return 0;
}
