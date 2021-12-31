#include <iostream>
 using namespace std;
int main()
{
    char ch;
    int n;
    cin>>ch>>n;
    while(n>0)
    {
        cout<<(char)ch;
        ch++;
        if(ch-1=='z')
        ch='a';
        n--;
    }
    return 0;
}
