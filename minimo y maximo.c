#include<stdio.h>
int minimo(int l, int v[]);
int main()
{
	int i,vmin=0,largo=0;
	printf("Ingrese el largo del vector: ");
	scanf("%d",&largo);
	int vec[largo];
	for(i=0;i<largo;i++){
		printf("VEC[%d] = ",i);
		scanf("%d",&vec[i]);
	}
	vmin = minimo(largo,vec);
	printf("\nEl valor minimo es %d\n\n",vec[vmin]);
	return 0;
}
int minimo(int l, int v[])
{
	int i,min=0;
	for(i=1;i<l;i++){
		if(v[i]<v[min]){
			min = i;
		}
	}
}
