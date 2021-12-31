/*
extend two rows and two columns
*/

#include <iostream>
 
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c],i,j;
    int x=r+2;
    int y=c+2;
    int p[x][y];
    for(i=0;i<x;i++)
    for(j=0;j<y;j++)
    p[i][j] = 1;
    for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    cin>>a[i][j];
    p[i][j] = a[i][j];
    }}
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
output
2
2
1
1
2
2
1 1 1 1 
2 2 1 1 
1 1 1 1 
1 1 1 1 
*/
