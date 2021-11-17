#include<stdio.h>
#include<stdbool.h>
bool premier(int n){
int i;	
for (i=2;i<n;i++){
if (n%i==0)	{
return false;	
}
}	
return true;	
}
void main(){
int n;
printf("entrer votre : \n ");
scanf("%d",&n);	 
if (premier(n)==0){
printf("n est pas premier ");
 }
 else printf("premier ");	
}
