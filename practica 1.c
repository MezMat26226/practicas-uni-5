#include<stdio.h>
void funcion(int a[]);
void imprimir(int b[]);
int main()
{
	int v[10] = {6,5,9,3,7,4,1,0,2,8};
	funcion(v);
	imprimir(v);
	system("pause");
	return 0;
}
void funcion(int a[])
{
	int i,j,aux;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(a[i]>a[j]){
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
}
void imprimir(int b[])
{
	int i;
	for(i=0;i<10;i++){
		printf("%i, ",b[i]);
	}
	printf("\n\n");
}
