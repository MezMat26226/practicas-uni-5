#include<stdio.h>
void ordenar(int a[]);
void imprimir(int b[]);
int main()
{
	int v[10] = {0,3,7,8,6,5,4,2,9,1};
	ordenar(v);//{0,1,2,3,4,5,6,7,8,9}
	imprimir(v);
	system("pause");
	return 0;
}
void ordenar(int a[])
{
	int i,j,aux;
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){ //Cuando "j" incrementa, en realidad, no aumenta su valor, sino que
			if(a[i]>a[j]){ //va a la siguiente posición
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
