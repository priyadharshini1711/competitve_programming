#include <iostream>
 using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]%a[j]==0||a[j]%a[i]==0)
            c++;
        }
    }
    cout<<c;
    return 0;
}
