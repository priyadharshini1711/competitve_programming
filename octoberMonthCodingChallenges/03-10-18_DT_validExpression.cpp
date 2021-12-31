/*
Valid Expression
 The program must accept a string S as the input. The string contains only the alphabets H and T. The program must print VALID if the alphabet contains sereis of the word "HT". Else the program must print INVALID as the output.
 Boundary Condition(s): 2 <= Length of S <= 100 
Example Input/Output 1: 
Input: HTHTHTHT 
Output: VALID
 Example Input/Output 2:
 Input: THT 
Output: INVALID
 Example Input/Output 3: 
Input: HTHTHTH 
Output: INVALID 
Explanation: The string HTHTHTH is not a series of the word "HT" as the last H is not followed by a T.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[100];
	cin>>s;
	int i,h=0,t=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='H')
		h++;
		else 
		t++;
	}
	if(h==t)
	cout<<"VALID";
	else 
	cout<<"INVALID";
	return 0;
}