#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,l,k,c;
printf("entrer nombre de ligne :\n");
scanf("%d",&l);
 
 for(i=1;i<=l;i++){	
 for(c=l-i;c>=1;c--){
 	printf(" ");
 }
 for (k=1;k<=2*i-1;k++)	
 {	 	
 printf("*");	
 }
printf("\n");
}
}

