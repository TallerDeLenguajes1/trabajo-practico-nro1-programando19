#include<stdio.h>
#include<conio.h>

main(){
	int *punt;
	int n=525;

	punt=&n;

	printf("\t");
    printf("Punto 1)\n\n");
	cprintf("(1) El Contenido del Puntero es: %d ", *punt);
	printf("\n"); 
	cprintf("(2) Direccion de Memoria Almacenada por el Puntero: %p ", punt);
	printf("\n");
	cprintf("(3) La Direccion de Memoria de la Variable: %p ", &n);
	printf("\n");
	cprintf("(4) La Direccion de Memoria del Puntero: %p ", &punt);
	printf("\n");
	cprintf("(5) El Tamanio de Memoria utilizado por esa varibale usando la funcion sizeof(): %d", sizeof(n));
	printf("\n");
    printf("\n");
    printf(" El punto (2) y el (3) son iguales, porque al puntero le asigne la Direccion de n, cuando hice: punt=&n \n El (4) es distinta la Direccion, respecto de los puntos anteriores porque, \n se trata de la direccion de memoria del puntero");
    printf("\n");

}