/*
String Length Pattern 
The program must accept two string values S1 and S2. The program must print the pattern as shown in the Example Input/Output sections. 

Boundary Condition(s): 1 <= Length of S1, S2 <= 100 

Example Input/Output 1:
 Input: 
bad water
 Output: 
Bw
 aa 
dt 
*e 
*r
 
Example Input/Output 2: 
Input: 
gionee kkr 
Output:
 gk 
ik 
or
 n*
 e*
 e*
*/

#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    char s1[100],s2[100];
    cin>>s1>>s2;
    int x,y;
    x=strlen(s1);
    y=strlen(s2);
    int i,j;
    if(x>y)
    {
        for(i=0;i<x;i++)
        {
            cout<<s1[i];
            if(i<y)
            cout<<s2[i];
            else 
            cout<<"*";
            cout<<"\n";
        }
    }
    else 
    {
        for(i=0;i<y;i++)
        {
            if(i<x)
            cout<<s1[i];
            else 
            cout<<"*";
            cout<<s2[i];
            cout<<"\n";
        }
    }
    return 0;
}
