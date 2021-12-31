#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int pos[n]={0};
	int i,j;
	for(i=0;i<n;i++)
	{
		char a[n];
		int k;
		cin>>a;
		for(j=0;j<n;j++)
		{
			int f=0;
			for(k=0;k<n&&k!=j;k++)
			{
				if(a[j]==a[k])
				{
					f=1;
					break;
				}
			}
			if(f==0)
			pos[i]++;
		}
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<=pos[i])
		{
			max=pos[i];
			j=i;
		} 		
	}
}
