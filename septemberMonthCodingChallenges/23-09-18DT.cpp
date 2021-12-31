#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char s1[100];
    char s2[100];
    char s3[100];
    cin>>s1>>s2;
    int i,j;
    int c = 0;
    for(i=0;i<strlen(s1);i++){
        s3[i] = toupper(s1[i]);
    }
    s3[i] = '\0';
    for(i=0;i<strlen(s2);i++){
        for(j=0;j<strlen(s3);j++){
            if(s2[i] == s3[j]){
                c++;
                break;
            }
        }
    }
    if(c == strlen(s2))
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}

/*
output1
hello
HELLO
yes

output2
HeLLO
LOW
no
*/