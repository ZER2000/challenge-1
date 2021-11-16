#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i;
 int p=1;
printf("entrer un nombre :\n");
scanf("%d",&n);
for(i=2;i<n;i++){
if (n%i==0) {
p=0;	
break;
}
}
if(p==0){
printf("nombre non premier");	
}
else printf("nombre premier");	
}

