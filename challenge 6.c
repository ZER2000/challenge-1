#include<stdio.h>
#include<stdlib.h>
void main()
{
float F,C;
printf("La temperature en Fahrenheit:\n");	
scanf("%f",&F);
C=(F-32)/1.8;
printf("La temperature en degre Celsius:\n%.2f",C);
}

