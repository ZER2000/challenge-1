#include<stdio.h>
#include<stdbool.h>
int n;
bool premier(){
int i;	
for (i=2;i<n;i++){
if (n%i==0)	{
return false;	
}
}	
return true;	
}
void main(){
printf("entrer votre nombre  : \n ");
scanf("%d",&n);	 
if (premier()==0){
printf("n est pas premier ");
 }
 else printf("premier ");	
}
