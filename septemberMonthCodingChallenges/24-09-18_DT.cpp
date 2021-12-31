/*
Two strings are given as the input s1 and s2 
The program must print the number of string s2 present as the substring in s2.

Input: 
abcdbcdbcdaaa
bcd

Output: 
3
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    int i;
    int s2_len = s2.length();
    int c = 0;
    for(i=0;i<s1.length();i++){
        string s3 = s1.substr(i,s2_len);
        if(s2==s3)
        c++;
    }
    cout<<c;
    return 0;
}

/*
output
abcdbcdbcdaaa
bcd
3

*/

