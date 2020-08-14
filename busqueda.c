#include<stdio.h>
#define N 10
int buscar(int num, int v[], int tam);
void leer(int v[], int n);
int main()
{
	int I,VAL,POS,VEC[N];
	leer(VEC,N);
	printf("Ingrese el valor a buscar: "); scanf("%d",&VAL);
	POS = buscar(VAL,VEC,N);
	if(POS>-1){
		printf("El valor %d se encuntra en la posicion %d.\n\n",VEC[POS],POS);
	}	                  
 	system("pause");
	return 0;
}
void leer(int v[], int n)
{
	int i;
	for(i=0;i<N;i++){
		printf("VECTOR[%d] = ",i);
		scanf("%d",&v[i]);
	}
}
int buscar(int num, int v[], int tam)
{
	int i,pos= -1;
	for(i=0;i<tam;i++){
		if(v[i]==num){
			pos = i;
		}
	}
	return pos;
}
