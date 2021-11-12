#include<stdio.h>
#include<stdlib.h>
void main ()
{
char c;
printf("ecririre votre caractere \n");
scanf("%c",&c);

if ((c>='a'&&c<='z' )||(c>='A'&&c<='Z'))       {
	printf(" alphabet \n");	
	if (c>='a'&&c<='z' ){
	printf(" minuscule \n");	
	}
	else { printf(" majuscule \n");
	}
	
		
}

else  
{ printf(" ne partient pas  des alphabets \n"); }




}
