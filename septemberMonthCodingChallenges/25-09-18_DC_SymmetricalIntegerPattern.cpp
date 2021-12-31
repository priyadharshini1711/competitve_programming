#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
s	int i,j;
	int ini;
	cout<<"0"<<"\n";
	for(i=0;i<n;i++)
	{
		ini=n-i;
		for(j=ini;j<=n;j++)
		cout<<j;
		cout<<"0";
		for(j=n;j>=ini;j--)
		cout<<j;
		cout<<"\n";		
	}
	return 0;
}
