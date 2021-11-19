#include<stdio.h>
#include<stdlib.h>
void main(){
	int T[50];
	int i,n;
	int tmp;
	printf(" demension du tableau :");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{	
	printf(" avant le tri  : \n");
	
	printf(" element du %d :",i+1);

	print(" \n");		
	}
	int ech=0;
	printf("apres le tri");
	do {
	for(i=0;i<n-1;i++){
	if(T[i]>T[i+1]){
	
	tmp=T[i];
	T[i]=T[i+1];	
	T[i+1]=tmp;
	ech++;		
	}		
	}		
	}while (ech>0);
	

}

