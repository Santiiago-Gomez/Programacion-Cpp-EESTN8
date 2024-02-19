#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
int main ()
{
    int N;
    int numeros [N];
    int contador=0;
    int auxiliar[N];
    int posicion=0;
    int numero=0;
    int contador2=0;
    int mayor=0;
    int posicionmayor=0;
    int bandera=0;
    int clave;
    int i;
    float suma=0;
    printf ("Ingrese contraseña: ");
    while (1) {
    	scanf("%d", &clave);
    	system ("cls");
	if(clave, "canguruguay"==0){
        printf("Ingrese la cantidad de sujetos que se van a comparar: ");
		scanf("%d",&N);
		system("cls");
	}
		for(i=0;i<N;i++){
			printf ("Ingrese el valor no. %d", i+1);
			scanf ("%d",&N);
		}
    printf("\nNumeros ingresados: ");
    for(contador=0;contador<N;contador++) {
        printf(" %d",numeros[contador]);
    }
    for(contador=0;contador<N;contador++) {
        auxiliar[contador]=0;
    }
    for(contador=0;contador<N;contador++) {
        numero = numeros[contador];
        posicion = contador;
        for(contador2=contador;contador2<N;contador2++) {
            if(numeros[contador2]==numero) auxiliar[posicion]++;
        }
    }
    mayor=auxiliar[0];
    posicionmayor = 0;
    for(contador=0;contador<N;contador++) {
        if(auxiliar[contador]>mayor) {
            posicionmayor=contador;
            mayor=auxiliar[contador];
        }
    }
    printf("\nMODA : %d",numeros[posicionmayor]);
    bandera=0;
    for(contador=N;contador>0 && bandera==0;contador--) {
        bandera=1;
        for(contador2=0;contador2<contador;contador2++) {
            if(numeros[contador2]>numeros[contador2+1]) {
                numero = numeros[contador2];
                numeros[contador2] = numeros[contador2+1];
                numeros[contador2+1]=numero;
                bandera=0;
            }
        }
    }
    printf("\nNumeros ingresados: ");
    for(contador=0;contador<N;contador++) {
        printf(" %d",numeros[contador]);
    }
    if(N%2!=0) {
        printf("\nEL valor de la mediana es : %d",numeros[N/2]);
    }
    for(contador=0;contador<N;contador++) {
        suma+=numeros[contador];
    }
    printf("\nMEDIA : %.2f\n",suma/N);
  if("canguruguay"!=0){
		printf("Contraseña incorrecta, ingresela nuevamente: ");
	}
  return 0;
}
}
