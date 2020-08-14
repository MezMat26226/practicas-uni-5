#include<stdio.h>
#define N 5
int minimo(int v[]);
int maximo(int v[]);
int main()
{
	int I,valorminimo,valormaximo,VEC[N];
	for(I=0;I<N;I++){
		printf("Introduzca un valor al vector en la posicion %d: ",I);
		scanf("%d",&VEC[I]);
	}
	valorminimo = minimo(VEC);
	valormaximo = maximo(VEC);
	printf("\n\n");
	printf("El valor minimo ingresado es %d y se encuentra en la posicion %d\n\n",valorminimo,VEC[valorminimo]);
	printf("y el valor maximo ingresado es: %d.\n\n",valormaximo);
	return 0;
}
int minimo(int v[N])
{
	int i,min = v[0];
	for(i=0;i<N;i++){
		if(v[i]<min){
			min=v[i];
		}
	}
	return min;
}
int maximo(int v[N])
{
	int i,max=0;
	for(i=0;i<N;i++){
		if(v[i]>max){
			max = v[i];
		}
	}
	return max;
}
