#include<stdio.h>
#define N 10
int main()
{
	int I,J,AUX,VEC[N];
	for(I=0;I<N;I++)
	{
		printf("Ingrese un valor al vector en la posicion numero %d: ",I);
		scanf("%d",&VEC[I]);
	}
	printf("\n\n");
	for(I=0;I<N;I++){
		for(J=0;J<N;J++){
			if(VEC[I]>VEC[J]){
				AUX = VEC[I];
				VEC[I] = VEC[J];
				VEC[J] = AUX;
			}
		}
	}
	for(I=0;I<N;I++){
		printf("%d, ",VEC[I]);
	}
	system("pause");
	return 0;
}
