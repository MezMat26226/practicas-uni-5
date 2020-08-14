#include<stdio.h>

int main()
{
	int vec[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Dale valor al vector en la posicion %i: ",i); //Este bucle es para darle valor a los
		scanf("%i",&vec[i]);                                  //vectores
	}
	for(i=0;i<5;i++)                                          //Este bucle es para mostrarlos
	{
		printf("%i, ",vec[i]);
	}
	system("pause");
	return 0;
}
