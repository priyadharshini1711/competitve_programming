#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int i=2,j=0,k=2,k1=0;
	char ip[10],kk[10];
	FILE *fp;
	printf("\n Enter file name");
	scanf("%s",kk);
	fp=fopen(kk,"r");
	if(fp==NULL)
	{
		printf("Error in opening file");
		getch();
	}
	while(!feof(fp))
	{
		fscanf(fp,"%s\n",ip);
		printf("\t\t%s\n",ip);
	}
	rewind(fp);
	printf("\n");
	printf("\t Statement \t\t Target Code ");
	printf("\n");
	while(!feof(fp))
	{
		fscanf(fp,"%s\n",ip);
		printf("\t%s",ip);
		printf("\t\t MOV %c,R%d\n\t",ip[i+k],j);
		if(ip[i+1]=='+')
		printf("\t\t ADD");
		else 
		printf("\t\t SUB");
		if(islower(ip[i]))
		printf("%c,R%d\n\n",ip[i+k1],j);
		else 
		printf("%c,%c\n",ip[i],ip[i+2]);
		j++;
		k1=2;
		k=0;
	}
	printf("\n");
	getch();
	fclose(fp);
}
