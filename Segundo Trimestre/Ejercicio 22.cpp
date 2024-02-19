#include <conio.h>
#include <stdio.h>
// Gomez Santiago, Cicero Antonella 6to 2da
// Ej 22:Realice un programa donde se ingresen una cantidad indefinida de
// numeros a un vector y se indique cual es el numero que mas veces se ingreso
void cuent();
int main ()
{
	int N, x=0, vec[N], i, l;
	printf ("\n Ingrese la cantidad de numeros que desea ingresar:");
	scanf ("%d",&N);
	for (i=0; i<N; i++)
	{
	printf ("\n Ingrese el valor deseado en la posicion %d en el vector: ",i+1);
	scanf("%d",&vec[i]);
	}
	for (i=0;i<N;i++)
	{
		if (vec[i]=vec[i+1])
		{
			l==vec[i];
			x++;	
		}
		printf ("\n El numero %d se repite %d veces",l,x);
	}
	getch ();
	return 0;
}

