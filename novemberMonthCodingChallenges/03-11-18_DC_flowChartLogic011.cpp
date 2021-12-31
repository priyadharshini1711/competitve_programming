#include <iostream>

using namespace std;

int main()
{
    int num,sum;
    sum = 0;
    cin>>num;
    while(num!=10){
        if(num%2==0)
        sum+=num;
        cin>>num;
    }
    cout<<sum;
    return 0;
}

/*
output1:
intput:
8
4
15
5
10

output
12
*/
