#include<stdio.h>
#include<stdlib.h>
void main ()
{
float a,b,c,d,moyen,somme;
printf ("donner la valeur de A: \n");
scanf("%f",&a);
printf ("donner la valeur de B: \n");
scanf("%f",&b);
printf ("donner la valeur de C: \n");
scanf("%f",&c);
printf ("donner la valeur de D: \n");
scanf("%f",&d);
somme=a+b+c+d;
moyen=somme/4;
printf(" la somme est:\t%.2f\n ",somme);
printf("le moyen est:\t%.2f",moyen);
}
