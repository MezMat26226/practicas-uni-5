#include<stdio.h>
#define N 10
int main()
{
	int i,acum,prom,cont,VECTOR[N];
	acum = 0;
	cont = 0;
	prom = 0;
	for(i=0;i<N;i++){
		printf("Ingrese valores al vector en la posicion numero %d: ",i);
		scanf("%d",&VECTOR[i]);
	}
	for(i=0;i<N;i++){
		acum += VECTOR[i];
	}
	prom = acum/N;
	printf("\n\n");
	for(i=0;i<N;i++){
		printf("VECTOR[%d]\n",VECTOR[i]);
		if(VECTOR[i]>prom){
			cont++;
		}
	}
	printf("Hay %d valores mayores a %d.\n",cont,prom);
}

