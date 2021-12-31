/*
Longest word in the given sentence
*/

#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    string s,t;
    int i,j=0,l=0;
    while(cin>>s)
    {
        l=s.length();
        if(l>j)
        {
            j=l;
            t=s;
        }
    }
    cout<<t;
}
