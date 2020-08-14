#include<stdio.h>
int maximo(int v[], int n);
int minimo(int v[], int n);
int main()
{
	int i,N,mayor=0,menor=0;
	printf("Cantidad de numeros para el vector: "); scanf("%d",&N);
	int vector[N];
	for(i=0;i<N;i++){
		printf("vec[%d] = ",i);
		scanf("%d",&vector[i]);
	}
	printf("\n");
	mayor = maximo(vector, N);
	menor = minimo(vector,N);
	printf("El valor mayor es: %d.\n\n",mayor);
	printf("Y el valor menor es %d.\n\n",menor);
	return 0;
}
int maximo(int v[], int n)
{
	int i,max=0;
	for(i=0;i<n;i++){
		if(v[i]>max){
			max = v[i];
		}
	}
	return max;
}
int minimo(int v[], int n)
{
	int i,min=v[0];
	for(i=0;i<n;i++){
		if(v[i]<min){
			min = v[i];
		}
	}
	return min;
}
