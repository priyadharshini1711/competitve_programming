/*
9/28/2018 www.skillrack.com/faces/candidate/dailychallenge.xhtml?k=DC http://www.skillrack.com/faces/candidate/dailychallenge.xhtml?k=DC 1/2 Remove First and Last Characters The program must accept N string values as the input. The program must print the string values without their first and last characters as the output. Boundary Condition(s): 1 <= N <= 50 3 <= Length of each string <= 100 Input Format: The first line contains the integer value of N. The next N lines contain the string values. Output Format: The first N lines contain the string values without their first and last characters. Example Input/Output 1: Input: 3 apple mango orange Output: ppl ang rang Explanation: The first and last characters of apple are a and e. So a and e are removed. Hence ppl is printed. The first and last characters of mango are m and o. So m and o are removed. Hence ang is printed. The first and last characters of orange are o and e. So o and e are removed. Hence rang is printed. Example Input/Output 2: Input: 2 9/28/2018 www.skillrack.com/faces/candidate/dailychallenge.xhtml?k=DC http://www.skillrack.com/faces/candidate/dailychallenge.xhtml?k=DC 2/2 PROGRAM !@#$%^&*( Output: ROGRA @#$%^&* Great! Your code has passed. Ambiance C++ Success. All Test Cases Passed.
*/

#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][100];
    int i,j;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=1;j<strlen(a[i])-1;j++)
        cout<<a[i][j];
        cout<<"\n";
    }
    return 0;
}
