#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[1000];
	int i=0;
	cin>>s;
	cout<<strlen(s);
	while(i<strlen(s))
	{
		s[i]=s[i]-'a';
		s[i]='z'-s[i];
		i++;
	}
	cout<<s;
}

/*
output
hello
5svool
*/
