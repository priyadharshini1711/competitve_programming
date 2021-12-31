#include<stdio.h>
#include<conio.h>
struct  deduct
{
	float PF;
	float LIC;
	float dec;
};
struct extra
{
	float Hra;
	float Da;
	float ext;
};
struct employee
{
	char n[30];
	int eno;
	float Basic;
	float Gross_sal;
	float Net_sal;
	struct deduct ded;
	struct extra ex;
};
void main()
{
	struct employee a;
	printf("enter the name of the employee\n");
	scanf("%s",a.n);
	printf("enter the employee number of the employee\n");
	scanf("%d",&a.eno);
	printf("enter the basic salary\n");
	scanf("%f",a.Basic);
	a.ex.Hra=a.Basic*0.18;
	a.ex.Da=a.Basic*0.15;
	a.ex.ext=a.ex.Hra+a.ex.Da;
	a.ded.PF=a.Basic*0.1;
	a.ded.LIC=a.Basic*0.07;
	a.ded.dec=a.ded.PF+a.ded.LIC;
	(a.Gross_sal)=a.Basic+a.ex.ext;
	a.Net_sal=(a.Gross_sal)-(a.ded.dec);
	printf("the total deduction is%f\n",a.ded.dec);
	printf("the gross salary is%f\n",a.Gross_sal);
	printf("the net salary of the employee is%f",a.Net_sal);
}
	

