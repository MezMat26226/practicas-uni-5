#include<stdio.h>
int buscar(int v[], int a, int val);
int main()
{
	int i,n,valor,valorencontrado;
	printf("Cuantos valores queres que tenga el vector: "); scanf("%d",&n);
	int VEC[n];
	for(i=0;i<n;i++){
		printf("VEC[%d] = ",i);
		scanf("%d",&VEC[i]);
	}
	printf("Que valor queres buscar: "); scanf("%d",&valor);
	valorencontrado = buscar(VEC,n,valor);
	printf("El valor %d se encuentra en %d\n\n",VEC[valorencontrado],valorencontrado);
	return 0;
}
int buscar(int v[], int a, int val)
{
	int i,alto,medio,bajo=0;
	alto = a -1;
	while(bajo<=alto){
		medio = (alto+bajo)/2;
		if(v[medio]==val){
			return medio;
		}
		if(val<v[medio]){
			alto = medio -1;
		}
		else{
			bajo = medio +1;
		}
	}
	return -1;
} 
