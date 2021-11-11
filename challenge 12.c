#include<stdio.h>
#include<stdlib.h>
void main ()
{
int nombre,a,b,c;
printf("donner votre nombre : \n");
scanf("%d",&nombre);
a=((nombre%100)%10);
b=((nombre%100)/10);
c=nombre/100;

printf("l'inverse de nombre est: \n%d%d%d%",a,b,c);
	
	
	
}
