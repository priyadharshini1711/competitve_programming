/*
Name of Department
 Given a string containing ‘e’ and ‘c’ in order find the count of e and c 
Ifc is greater than e then print CSE
If c is greater than e print ece
Else if both are equal print CSE – ECE
*/

#include <iostream>
#include <string.h>
 using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int c=0,e=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='c')
        c++;
        else 
        e++;
    }
    if(c>e)
    cout<<"CSE";
    else if(e>c)
    cout<<"ECE";
    else 
    cout<<"ECE - CSE"
return 0;
}
