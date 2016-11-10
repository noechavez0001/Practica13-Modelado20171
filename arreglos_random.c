#include "arreglos_random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* arreglo_int(size_t num, int min, int max){
	srand(time(NULL));										//inicializamos el generador de números aleatorios
	int *arreglo = malloc(num * sizeof(int));				//Usamos la funcion malloc para recervar memoria para el arreglo y se guarda en un apuntador

	for(int i = 0; i < num; i++){							//iteramos sobre el tamaño del arreglo
		arreglo[i] = (rand() % (max - min + 1)) + min ;		//en la posicion i agregamos el numero aleatorio generado por rand()
	}														//donde le sacamos el modulo de la diferencia entre max y min + min para obtenerlo en el rango
	return arreglo;											//regresamos el arreglo de numeros aleatorios
}

double* arreglo_double(size_t num, double min, double max){
	srand(time(NULL));										//inicializamos el generador de números aleatorios
	double *arreglo = malloc(num * sizeof(double));			//Usamos la funcion malloc para recervar memoria para el arreglo y se guarda en un apuntador

	for(int i = 0; i < num; i++){							//iteramos sobre el tamaño del arreglo
		double a = (double)rand() / RAND_MAX;				//obtenemos un numero aleatorio entre 0 y 1 al dividir entre el maximo entero disponible
		arreglo[i] = a * (max - min + 1) + min;				//en la posicion i agregamos el numero aleatorio generado al multiplicar lo obtenido por la diferencia
	}														//y sumarle el minimo para que se encuentre en el rango deseado
	return arreglo;											//regresamos el arreglo de numeros aleatorios
}
