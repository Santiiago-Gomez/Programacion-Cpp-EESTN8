#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
// Gomez Santiago y Cicero Antonella
main () {
	int clave,a;
	float radioa,alturaa,volucilindro,lado,ladot,basepr,alturapr,prismat,radioesfe,radioesfet,radiocono,alturacono,conot,basepira,alturapira,pirat;
	while (1) {
	printf ("Programa dedicado al calculo de volumen \n");
	printf ("Copyrigth By Degastaldi Entertaiment Group \n");
	printf ("Ingrese clave: ");
	scanf ("%d",&clave);
	printf ("Aguarde un momento...");
	Sleep (3000);
	system ("cls");
	
	if (clave!=2011) {
		printf ("Contraseña incorrecta capo \n");
	}
	if (clave==2011) {
		break;
	}
	}
	printf ("Indique: \n");
	printf ("1. Cilindros \n");
	printf ("2. Cubos \n");
	printf ("3. Prisma \n");
	printf ("4. Piramide \n");
	printf ("5. Cono \n");
	printf ("6. Esfera \n");
	printf ("Seleccion: ");
	scanf ("%d",&a);
	system ("cls");
	switch (a) {
		case 1: printf ("Cilindros: \n");
		        printf ("Ingrese el radio y la altura en metros: \n");
		        printf ("Radio: ");
		        scanf ("%g",&radioa);
		        printf ("Altura: ");
		        scanf ("%g",&alturaa);
		        volucilindro= pow(radioa,2)*alturaa*3.14;
		        printf ("El volumen es: %g m3", volucilindro);
		        printf ("\n Todo joya pa");
		        break;
		case 2: printf ("Cubos: \n");
		        printf ("Ingrese el lado en metros: \n");
		        printf ("Lado: ");
		        scanf ("%g",&lado);
		        ladot= (lado*lado*lado);
		        printf ("El volumen es %g m3", ladot);
		        printf ("\n Todo joya pa");
		        break;
		case 3: printf ("Prisma: \n");
		        printf ("Ingrese la superficie base y altura en metros: \n");
		        printf ("Base: ");
		        scanf ("%g",&basepr);
		        printf ("Altura: ");
		        scanf ("%g",&alturapr);
		        prismat= basepr*alturapr;
		        printf ("El volumen es %g m3", prismat);
		        printf ("\n Todo joya pa");
		        break;
		case 4: printf ("Piramide: \n");
		        printf ("Ingrese la superficie base y altura en metros: \n");
		        printf ("Base: ");
		        scanf ("%g",&basepira);
		        printf ("Altura: ");
		        scanf ("%g",&alturapira);
		        pirat= (basepira*alturapira)/(3);
		        printf ("El volumen es: %g m3", pirat);
		        printf ("\n Todo joya pa");
		        break;
		case 5: printf ("Cono: \n");
		        printf ("Ingrese el radio y la altura en metros: \n");
		        printf ("Radio: ");
		        scanf ("%g",&radiocono);
		        printf ("Altura: ");
		        scanf ("%g",&alturacono);
		        conot= (pow(radiocono,2)*alturacono*3.14) / 3;
		        printf ("El volumen es %g m3", conot);
		        printf ("\n Todo joya pa");
		        break;
		case 6: printf ("Esfera: \n");
		        printf ("Ingrese radio en metros: \n");
		        scanf ("%g",&radioesfe);
		        radioesfet= (pow(radioesfe,3)*3.14)*(4/3);
		        printf ("El volumen es: %g m3", radioesfet);
		        printf ("\n Todo joya pa");
		        break;
		default: printf ("Che capo son 6 tanto te cuesta?");
		        break;
	}
	getch ();
	return 0;
}
