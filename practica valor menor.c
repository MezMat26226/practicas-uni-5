#include<stdio.h>
int minimo(int v[],int l);
int main()
{
	int i,h,menor=0;
	printf("Longitud del vector: "); scanf("%d",&h);
	int vec[h];
	for(i=0;i<h;i++){
		printf(" VEC[%d] = ",i);
		scanf("%d",&vec[i]);
	}
	menor = minimo(vec,h);
	printf("\nEl valor menor es %d\n",menor);
	return 0;
}
int minimo(int v[],int l)
{
	int i,min;
	min = v[0];
	for(i=0;i<l;i++){
		if(min>v[i]){
			min = v[i];
		}
	}
	return min;
}
