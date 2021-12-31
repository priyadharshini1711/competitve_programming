#include <iostream>
 using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    while(m!=n)
    {
        if(m<n)
        {
            cout<<m;
            m++;
        }
        else 
        {
            cout<<n;
            n++;
        }
    }
    cout<<m;
    return 0;
}
