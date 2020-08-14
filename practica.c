#include<stdio.h>
int buscar(int vec[], int l, int valor);
int main()
{
	int I,K,VALOR,ENCONTRADO;
	printf("Cuantos numeros desea que tenga su vector: "); scanf("%d",&K);
	int VEC[K];
	for(I=0;I<K;I++){
		printf("VEC[%d] = ",I);
		scanf("%d",&VEC[I]);
	}
	printf("¿Que valor deseas buscar?: "); scanf("%d",&VALOR);
	ENCONTRADO = buscar(VEC,K,VALOR);
	printf("El valor %d se encuentra en la posicion numero: %d",VEC[ENCONTRADO],VALOR);
	return 0;
}
int buscar(int vec[], int l, int valor)
{
	int bajo,alto,medio;
	bajo = 0;
	alto = l -1;
	while(bajo<=alto){
		medio = (alto+bajo)/2;
		if(vec[medio]==valor){
			return medio;
		}
		if(valor<vec[medio]){
			alto = medio -1;
		}
		else{
			bajo = medio +1;
		}
	}
	return -1;
}
