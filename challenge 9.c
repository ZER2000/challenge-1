
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int Xm,Ym,Xn,Yn;
float dist ;
printf ("les cordonnees de M :\n");
printf("Xm :\t");
scanf("%d",&Xm);
printf("Ym :\t");
scanf("%d",&Ym);
printf ("les cordonnees de N :\n");
printf("Xn :\t");
scanf("%d",&Xn);
printf("Yn :\t");
scanf("%d",&Yn);
dist=sqrt(pow((Xn-Xm),2)+pow((Yn-Ym),2));




printf("la distence entre M et N est : \t%.2f ",dist);






return 0;
}
