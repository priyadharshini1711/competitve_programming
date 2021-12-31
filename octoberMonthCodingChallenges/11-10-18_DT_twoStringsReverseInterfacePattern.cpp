#include <iostream>
#include <string.h>
 using namespace std;
int main()
{
    char s1[1000],s2[1000],s3[1000];
    int i,j;
    cin>>s1>>s2;
    j=strlen(s2)-1;
    for(i=0;i<strlen(s2);i++)
    {
        s3[i]=s2[j];
        j--;
    }
    int k=0;
    j=0;
    for(i=0;i<2*strlen(s1);i++)
    {
        if(i%2==0)
        {
            cout<<s1[j];
            j++;
        }
        else
        {
            cout<<s3[k];
            k++;
        }
    }
    return 0;
}