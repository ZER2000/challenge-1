#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int a,b,somme,mult,soust;
	float div,res;
	
	printf("donner la valeur de A: \n");
	scanf("%d",&a);
	printf("donner la valeur de B: \n");
	scanf("%d",&b);
	somme=a+b;
	mult=a*b;
	soust=a-b;
	div=a/b;
	res=a%b;
	
	printf("la somme est:%d\nla multiplication est:%d\nla soustraction est:%d\nla division est:%.2f\nle reste est:%.2f\n",somme,mult,soust,div,res);
	
}
