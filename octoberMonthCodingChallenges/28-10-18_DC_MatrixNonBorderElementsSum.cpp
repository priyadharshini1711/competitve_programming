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
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=0&&i!=r-1&&j!=0&&j!=c-1)
            sum=sum+a[i][j];
        }
    }
    cout<<sum;
    return 0;
}
