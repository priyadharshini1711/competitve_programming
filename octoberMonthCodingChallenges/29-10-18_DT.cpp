#include <iostream>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int m=n;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    int a[i];
    int j;
    for(j=0;j<=i;j++)
    {
        a[j]=m%10;
        m=m/10;
    }
    for(j=i;j>=0;j--)
    {
        switch(a[j])
        {
            case 0:cout<<"zero"<<" ";break;
            case 1:cout<<"one"<<" ";break;
            case 2:cout<<"two"<<" ";break;
            case 3:cout<<"three"<<" ";break;
            case 4:cout<<"four"<<" ";break;
            case 5:cout<<"five"<<" ";break;
            case 6:cout<<"six"<<" ";break;
            case 7:cout<<"seven"<<" ";break;
            case 8:cout<<"eight"<<" ";break;
            case 9:cout<<"nine"<<" ";break;
        }
    }
    return 0;
}
