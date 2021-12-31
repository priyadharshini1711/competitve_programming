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
	if(r%2==0)
	r=r/2;
	else 
	r=(r/2)+1;
	if(c%2==0)
	c=c/2;
	else 
	c=(c/2)+1; 
	int s=0;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	s=s+a[i][j];
	cout<<s;
	return 0;
}
