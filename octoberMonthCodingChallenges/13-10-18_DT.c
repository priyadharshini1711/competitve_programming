#include <iostream>
 using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    int pose,poso,o=0,e=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
            pose=i;
        }
        else 
        {
            o++;
            poso=i;
        }
    }
    //cout<<e<<" "<<o<<" ";
    if(e==1)
    cout<<pose+1;
    else if(o==1)
    cout<<poso+1;
    return 0;
}
