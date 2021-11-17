#include<stdio.h>
 int a,b,c;
 void inver(){
 c=a;
 a=b;
 b=c;
 printf("Apres permitation :\n");
 printf("B=%d \n",b);
 printf("A=%d \n",a);	
 }
 void main(){
  printf("ecrire la valeur de A :\n");
 scanf("%d",&a);
 printf("ecrire la valeur de b :\n");
 scanf("%d",&b); 
 
  inver(); 
 
}
 
