#include<stdio.h>
#include<conio.h>
#include <windows.h>
#define N 5

// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 14:Idem 12 pero se deben imprimir los numeros menor a mayor.

int main()
{
int vec[N],i,j,aux;
printf("\n Ingrese numeros enteros: ");
for (i=0;i<N;i++)
scanf("%d",&vec[i]);
for(i=0;i<N-1;i++)
for(j=0;j<N;j++)
if(vec[j]>vec[j+1]){
	aux=vec[j];
	vec[j]=vec[j+1];
	vec[j+1]=aux;
}
printf("\n El vector ordenado es: ");
for(i=0;i<N;i++)
printf("\n %d",vec[i]);
getch();
return 0;
}
