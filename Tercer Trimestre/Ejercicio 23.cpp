//Ejercicio 23: Realice un programa en donde pueda asociar una cantidad indefinida de resistencias, inductores 
//o capacitores en serie o paralelo con funciones.
#include <stdio.h>
#include <windows.h>
#include <conio.h>

float sumaserie (float x);
float sumaparalelo(float x, float y);

main(){
	int modo,componente;
	float RT,L,LT,C,CT,R;
	
	printf("\nEjercicio 11\n");
	printf("\nSeleccione el modo de asociacion:\n1=Serie\n2=Paralelo\n");
	scanf("%d",&modo);
	system("cls");
	
	if(modo==1){ 	
		printf("\nMODO DE ASOCIACION: SERIE\n");
		printf("\nEliga el componente a asociar:\n1=Resistencias\n2=Inductores\n3=Capacitores\n");
		scanf("%d",&componente);
		system("cls");
		switch(componente){
			case 1: 
				printf("\nMODO DE ASOCIACION: SERIE");
				printf("\nCOMPONENTE A ASOCIAR: RESISTENCIAS\n\n");
				RT=0;
				while(R!=0){
					printf("Ingrese una resistencia (0=fin): ");
					scanf("%f",&R);
					RT=sumaserie(R);
				}
				printf("\nEl valor de la resistencia total, sumada en serie es: %g", RT);
				break;
			case 2:
				printf("\nMODO DE ASOCIACION: SERIE");
				printf("\nCOMPONENTE A ASOCIAR: INDUCTORES\n\n");
				LT=0;
				while(L!=0){
					printf("Ingrese un inductor (0=fin): ");
					scanf("%f",&L);
					LT=sumaserie(L);
				}
				printf("\nEl valor de los inductores totales, sumados en serie es: %g", LT);
				break;
			case 3:
				printf("\nMODO DE ASOCIACION: SERIE");
				printf("\nCOMPONENTE A ASOCIAR: CAPACITORES\n\n");
				printf("Ingrese un capacitor (0=fin): ");
				scanf("%f",&CT);
				printf("Ingrese un capacitor (0=fin): ");
				scanf("%f",&C);
				while(C!=0){
					CT=sumaparalelo(CT,C);
					printf("Ingrese un capacitor (0=fin): ");
					scanf("%f",&C);
				}
				printf("\nEl valor total de los capacitores, sumados en serie es: %g", CT);
				break;
			default:
				printf("\nERROR, EL NUMERO SELECCIONADO NO SE ENCUENTRA EN LAS OPCIONES, SELECCIONE UN NUMERO DEL 1 AL 3\n");
				break;
				

		}
	}
	if(modo==2){ 	
		printf("\nMODO DE ASOCIACION: PARALELO\n");
		printf("\nEliga el componente a asociar:\n1=Resistencias\n2=Inductores\n3=Capacitores\n");
		scanf("%d",&componente);
		system("cls");
		switch(componente){
			case 1: 
				printf("\nMODO DE ASOCIACION: PARALELO");
				printf("\nCOMPONENTE A ASOCIAR: RESISTENCIAS\n\n");
				printf("Ingrese una resistencia (0=fin): ");
				scanf("%f",&RT);
				printf("Ingrese una resistencia (0=fin): ");
				scanf("%f",&R);
				while(R!=0){
					RT=sumaparalelo(RT,R);
					printf("Ingrese una resistencia (0=fin): ");
					scanf("%f",&R);
				}
				printf("\nEl valor total de las resistencias, sumadas en serie es: %g", RT);
				break;
			case 2:
				printf("\nMODO DE ASOCIACION: PARALELO");
				printf("\nCOMPONENTE A ASOCIAR: INDUCTORES\n\n");
				printf("Ingrese un inductor (0=fin): ");
				scanf("%f",&LT);
				printf("Ingrese un inductor (0=fin): ");
				scanf("%f",&L);
				while(L!=0){
					LT=sumaparalelo(LT,L);
					printf("Ingrese un inductor (0=fin): ");
					scanf("%f",&L);
				}
				printf("\nEl valor de total de los inductores, sumados en serie es: %g", LT);
				break;
			case 3:
				printf("\nMODO DE ASOCIACION: PARALELO");
				printf("\nCOMPONENTE A ASOCIAR: CAPACITORES\n\n");
				CT=0;
				while(C!=0){
					printf("Ingrese una resistencia (0=fin): ");
					scanf("%f",&C);
					CT=sumaserie(C);
				}
				printf("\nEl valor total de los capacitores, sumados en serie es: %g", CT);
				break;
			default:
				printf("\nERROR, EL NUMERO SELECCIONADO NO SE ENCUENTRA EN LAS OPCIONES, SELECCIONE UN NUMERO DEL 1 AL 3\n");
				break;
		}
	}
	
	if((modo!=1)&&(modo!=2)){
		printf("\nERROR, EL NUMERO SELECCIONADO NO SE ENCUENTRA EN LAS OPCIONES, SELECCIONE UN NUMERO DEL 1 AL 2\n");
	}	
	getch();
}

float sumaserie(float x){
	static float T;
	T=T+x;
	return T;
}

float sumaparalelo(float x, float y){
	static float T;
	T=(x*y)/(x+y);
	return T;
}
