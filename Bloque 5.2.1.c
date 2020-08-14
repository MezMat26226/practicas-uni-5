#include<stdio.h>
void fun(int a[]);
void imprimir(int b[]);
int main()
{
	int v[2];
	fun(v);
	imprimir(v);
	system("pause");
	return 0;	
}
void fun(int a[])
{
	int i;
	for(i=0;i<2;i++){
		printf("Ingrese valores al vector: "); scanf("%i",&a[i]);
	}
}
void imprimir(int b[])
{
	int i;
	for(i=0;i<2;i++){
		printf("%i, ",b[i]);
	}
	printf("\n\n");
}
