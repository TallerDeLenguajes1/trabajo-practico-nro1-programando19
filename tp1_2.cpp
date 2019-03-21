//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>

int cuadrado_de_numero(int n);
void cuadrado_de_numero_dos(int n);
void mostrar_dire_contenido_var(int n);
void invertir_numeros(int *a, int *b);
void ordenar_numeros(int *a, int *b);

  void main(){
    
    printf("\tSUPUESTO: TODAS LAS OPRACIONES SE CALCULAN A PARTIR DE UN NUMEROS INGRESADOS SALVO EL PUNTO iv)\n\n");
    
    int x=85, y=27;
    int valor, *punt;
    printf(" Ingrese un valor (de -9999 a 9999) para Realizar los Calculos: ");
    scanf("%d", &valor);
    punt=&valor;
    printf(" %d ", cuadrado_de_numero(*punt));
    printf("\n");
    cuadrado_de_numero_dos(valor);
    mostrar_dire_contenido_var(valor);
    printf("\n iv) Invertir 2 Numeros\n");
    printf(" \n\tValor Actual de x = %d Valor Actual de y = %d \n", x, y);
    invertir_numeros(&x, &y);
    printf("\n v) Ordenar de Menor a Mayor\n");
    printf(" \n\tValor Actual de x = %d Valor Actual de y = %d \n", x, y);
    if(x==y){
    	printf("Los valores son iguales");
    }else{
    	ordenar_numeros(&x, &y);
    	printf(" \n\tEl menor valor es: %d El mayor valor es: %d \n", x, y);
    }
    printf("\nvi) Leer pares de valores e imprimirlos por pantalla de forma ordenada\n\n");
    int k, u;
    printf("\tIngrese el Primer Numero: ");
    scanf("%d", &k);
    fflush(stdin);
    printf("\tIngrese el Segundo Numero: ");
    scanf("%d", &u);
    ordenar_numeros(&k, &u);
    printf(" \n\tMenor valor = %d Mayor valor = %d \n", k, u);
   
    
}
int cuadrado_de_numero(int n){
	printf("\n i)  Funcion que devuelva el cuadrado de un numero \n\n");
    printf(" \tEl cuadrado del Numero es:");
    return n*n;
}
void cuadrado_de_numero_dos(int n){
	printf("\n ii) Funcion anterior, pero devolviendo un tipo void  \n\n");
    printf(" \tEl cuadrado del Numero es: %d \n", n*n );
}
void mostrar_dire_contenido_var(int n){
	printf("\n iii) Direccion y el Contenido de la variable Ingresada por teclado\n\n");
    int *punt;
    punt=&n;
    printf("\n \tLa direccion de la variable es: %p  y su valor es: %d \n", punt, *punt);

}

void invertir_numeros(int *a, int *b){
   int aux;
   aux=*a;
   *a=*b;
   *b=aux;
   printf(" \n\tValor Invertido de x es: %d Valor Invertido de y es: %d \n", *a, *b);
}

void ordenar_numeros(int *a, int *b){
   int aux;
   if(*a>*b){
   	 aux=*a;
     *a=*b;
     *b=aux;
     printf(" \n\tValor Invertido de x es: %d Valor Invertido de y es: %d \n", *a, *b);
   }
}

