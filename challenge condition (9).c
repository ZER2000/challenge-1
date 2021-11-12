#include<stdio.h>
#include<stdlib.h>
 void main ()
 {
 int jour,mois,anne;
 printf ("entrer le jour :\n");
 scanf("%d",&jour);
 printf("entrer le mois :\n");
 scanf("%d",&mois);
 printf("entrer anne :\n");
 scanf("%d",&anne);
switch (mois) {
case 1:
printf("la date: %d/Janvier/%d",jour,anne);
break;
case 2:
printf("la date: %d/Fevrier/%d",jour,anne);
break;
case 3:
printf("la date: %d/Mars/%d",jour,anne);
break;
case 4:
printf("la date: %d/Avril/%d",jour,anne);
break;
case 5:
printf("la date: %d/Mais/%d",jour,anne);
break;
case 6:
printf("la date: %d/Juin/%d",jour,anne);
break;
case 7:
printf("la date: %d/juillet/%d",jour,anne);
break;
case 8:
printf("la date: %d/Aout/%d",jour,anne);
break;
case 9:
printf("la date: %d/septembre/%d",jour,anne);
break;
case 10:
printf("la date: %d/Octobre/%d",jour,anne);
break;
case 11:
printf("la date: %d/novembre/%d",jour,anne);
break;
case 12:
printf("la date: %d/Decembre/%d",jour,anne);
break;


}
	
	
}
	  
 	
