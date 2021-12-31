/*
Most Repeated character(s)
 The program must accept a string S as the input. The program must print only the most repeated characters in the string S as the output. If more than one character is repeated maximum number of times, then the characters must be printed in the order of their occurrence as the output. If there is no repeated characters in S, then the program must print all the characters in S as the output. 

Boundary Condition(s):
 1 <= Length of S <= 100 


Input Format: 
The first line contains the value of S. 

Output Format: The first line contains the most repeated character in the order of their occurrences. 

Example Input/Output 1:

 Input: apple 
Output: pp 
Explanation: The most repeated character is p which is occurred two times in apple. Hence the output is pp Example

 Input/Output 2:

 Input: #XRREETRE 
Output: RREERE

*/

#include <iostream>
#include<string.h>

using namespace std;

int main()
{
	char s[100];
	cin>>s;
	int n,i,j;
	n=strlen(s);
	int f[n]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i]==s[j])
			f[i]++;
		}
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<f[i])
		max=f[i];
	}
	for(i=0;i<n;i++)
	{
		if(f[i]==max)
		cout<<s[i];
	}
	return 0;
}
