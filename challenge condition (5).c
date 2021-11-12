#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main ()
{
float a,b,c,d,x1,x2,x;
printf("donner la valeur de A : \n");
scanf("%f",&a);
printf("donner la valeur de B: \n");
scanf("%f",&b);
printf("donner la valeur de C: \n");
scanf("%f",&c);
d=pow(b,2)-(4*a*c);

 if(d < 0){

printf("Pas de solution reelle\n");

}
else if(d==0){
x=(-b)/(2*a);
printf ("X=%.2f\n",x);
}

else if (d>0){
x1=(-b+sqrt(d))/2*a;
x2=(-b-sqrt(d))/2*a;
printf ("X1=%.2f X2=%.2f\n",x1,x2);
}


;

}

