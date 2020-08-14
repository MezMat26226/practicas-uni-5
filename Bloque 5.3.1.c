#include<stdio.h>
void funcion(int*vec);
void imprimir(int*vec);
int main()
{
	int vec[3];
	funcion(vec);
	imprimir(vec);
	system("pause");
	return 0;
}
void funcion(int *vec)
{
	int i;
	for(i=0;i<3;i++){
		printf("Introduci un valor para la posicion %d: ",i+1);
		scanf("%d",(vec+i));
	}
}
void imprimir(int*vec)
{
	int i;
	for(i=0;i<3;i++){
		printf("%d, ",*(vec+i));
	}
}
