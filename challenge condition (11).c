#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main ()
{
int Xa,Xb;
int Ya,Yb;
int Xd,Yd;
int dis,dis1,dis2;
printf("entrer coordonnee de A \n");
printf("Xa :\n");
scanf("%d",&Xa);
printf("Ya: \n");
scanf("%d",&Ya);
printf("entrer coordonnee de B \n");
printf("Xb :\n");
scanf("%d",&Xb);
printf("Yb: \n");
scanf("%d",&Yb);
printf("entrer coordonnee de D \n");
printf("Xd :\n");
scanf("%d",&Xd);
printf("Yd: \n");
scanf("%d",&Yd);
dis=sqrt(pow((Xb-Xa),2)+pow((Yb-Ya),2));
dis1=sqrt(pow((Xd-Xa),2)+pow((Yd-Ya),2));
dis2=sqrt(pow((Xd-Xb),2)+pow((Yd-Yb),2));


if(dis==dis1+dis2){
printf("D  se trouve sur le segmen. \n"); }
else { printf("D nr trouve pas sur le segmen.\n");
}



}

