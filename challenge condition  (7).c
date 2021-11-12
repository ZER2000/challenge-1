#include<stdio.h>
#include<stdlib.h>
void main ()
{

float m;
printf("entrer le moyen eleve: \n");
scanf("%f",&m);


if (m<10){
printf("eleve non admis \n");
}
else if (m>=16){

printf("mention tres bien \n");
}
else if (m>=14){
printf("mention  bien \n");
}
else if (m>=12){
printf("mention  assez bien \n");
}
else if (m>=10){
printf("mention passable \n");

}
}
