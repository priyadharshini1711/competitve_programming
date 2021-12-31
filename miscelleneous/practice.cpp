#include <iostream>
using namespace std;
 
int main()
{
	long long int i,j,m,n=600851475143;
	int f=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					f=1;
					break;
				}
			}
		}
		if(f==0)
			m=i;
	}
	cout<<m;
 	return 0;
}
