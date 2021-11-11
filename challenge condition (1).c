#include<stdlib.h>
#include<stdio.h>
void main()
{
float F,C;
printf("La temperature en Fahrenheit:\n");	
scanf("%f",&F);
C=(F-32)/1.8;
printf("La temperature en degre Celsius:\n%.2f\n",C);

   if (C<0){
printf("la sensation ressentie  tres Froid \n");	
}
  else if (C<10){
  	printf("la sensation ressentie Froid \n");
}
else if (C>=40){
	printf("la sensation ressentie  tres Chaud \n");
}

else if (C>=20){
	printf("la sensation ressentie Chaud \n");
}

}
	
	
	

