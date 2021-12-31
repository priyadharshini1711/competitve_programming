/*
Alphabet(s) or -1
 The program must accept a string S as the input. The program must calculate the count of vowels in S as C (the count of vowels in S is always less than 27) and print the C alphabets in lower case in alphabetic order as the output. If there is no vowel in S, then the program must print -1 as the output. 

Boundary Condition(s):
 1 <= Length of String S <= 100 0 <= C <= 26 

Example Input/Output 1:
 Input: apple
 Output: ab 

Example Input/Output 2: 
Input: ENVIRONMENT 
Output: abcd 

Example Input/Output 3: 
Input: XYZ 
Output: -1

*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[100];
	cin>>s;
	int n,i;
	n=strlen(s);
	int c=0;
	for(i=0;i<n;i++)
	{
		 s[i]=tolower(s[i]);
		 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		 c++;
	}
	i=0;
	char x;
	if(c==0)
	cout<<"-1";
	else 
	{
		while(c>0)
		{
			x='a'+i;
			cout<<x;
			i++;
			c--;		
		}
	}
	return 0;
}
