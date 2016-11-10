/*Incluye las funciones de b_sort.c y arreglos_random.c*/
#include <stdio.h>
#include "b_sort.h"
#include "arreglos_random.h"

/*Declara las funciones que vamos a ocupar*/
// función que compara dos enteros
int cmp_int(const void *a, const void *b);
// función que compara dos doubles
int cmp_double(const void *a, const void *b);
// función que imprime una lista de enteros de tamaño num
void imprime_int(int *arreglo, size_t num);
// función que imprime una lista de doubles de tamaño num
void imprime_double(double *arreglo, size_t num);


int main()
{
    // Se inicializan 2 arreglos, uno de ints y otro de doubles
    int *arr1 = arreglo_int(20, 0, 10);
    double *arr2 = arreglo_double(20, 0, 10);

    // Se imprime ordena e imprime el primer arreglo
    imprime_int(arr1, 20);
    bsort(arr1, 20, sizeof(int), &cmp_int);
    imprime_int(arr1, 20);

    // Se imprime ordena e imprime el segundo arreglo
    imprime_double(arr2, 20);
    bsort(arr2, 20, sizeof(double), &cmp_double);
    imprime_double(arr2, 20);

    // Se libera la memoria que ocupan los arreglos ordenados
    free(arr1);
    free(arr2);

    return 0;
}

//Funcion que te indica si el primer entero es menor que el segundo
int cmp_int(const void *a, const void *b){
	int tmp_a = *(int *)a;
	int tmp_b = *(int *)b;
	if (tmp_a < tmp_b)
	{
		return 1;
	}
	return 0;
}

//Funcion que te indica si el primer double es menor que el segundo
int cmp_double(const void *a, const void *b){
	double tmp_a = *(double *)a;
	double tmp_b = *(double *)b;
	if (tmp_a < tmp_b)
	{
		return 1;
	}
	return 0;
}

void imprime_int(int *arreglo, size_t num){
	for (int i = 0; i < num; ++i)
	{
		int a = arreglo[i];
		printf("%d", a);
	}
	printf("\n");
}

void imprime_double(double *arreglo, size_t num){
	for (int i = 0; i < num; ++i)
	{
		double a = arreglo[i];
		printf("%f", a);
	}
	printf("\n");
}
