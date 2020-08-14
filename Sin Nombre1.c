#include<stdio.h>
void funcion(int a, int b);
int main()
{
	int x,y;
	printf("Ingrese un numero: "); scanf("%d",&x);
	do{
		printf("Ingrese un numero mayor que el anterior: "); scanf("%d",&y);
	}while(y<x);
	funcion(x,y);
	system("pause");
	return 0;
}
void funcion(int a, int b)
{
	int i,j,cont=0;
	for(i=a;i<=b;i++){
		for(j=2;j<=i;j++){
			if(i%j==0){
				cont++;
			}
		}
		if(cont==1){
			printf("%d  ,",i);
		}
		cont = 0;
	}
}
