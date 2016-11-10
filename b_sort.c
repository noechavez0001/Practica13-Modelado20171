#include "b_sort.h"
#include <stdio.h>



void bsort(void* base, size_t num, size_t size,
            int (*compar)(const void*, const void*)){
	
	if(size == sizeof(int))										//verifica que los elementos sean ints
	{
		int *baseN = base;
		int i, j, temp;                                 		//Declaracion de variables de apoyo en el ordenamiento
		for (i = 0; i < num; i++)	                    		//Iteraciones sobre el numero de elementos
		{
			for (j = 0; j < num - 1; j++)	            		//Iteraciones para hacer los intercambios
			{	
				int val = (*compar)(baseN + j, baseN + j + 1);	//resultado de la funcion de comparacion
				if (val == 1)                    				//Si el valor del indice j es mayor que el del j+1 se intercambian
				{
					temp = *(baseN + j);                   		//Se iguala la variable temporal al valor del indice j para el intercambio
					*(baseN + j) = *(baseN + j + 1);       		//Se iguala el indice j al j+1
					*(baseN + j + 1) = temp;               		//Se iguala el j+1 a la guardada en la variable temporal
				}
			}
		}
	}
	if (size == sizeof(double))									//verifica que los elementos sean doubles
	{
		double *baseN = base;
		int i, j;
		double temp;                                 			//Declaracion de variables de apoyo en el ordenamiento
		for (i = 0; i < num; i++)	                    		//Iteraciones sobre el numero de elementos
		{
			for (j = 0; j < num - 1; j++)	            		//Iteraciones para hacer los intercambios
			{	
				int val = (*compar)(baseN + j, baseN + j + 1);	//resultado de la funcion de comparacion
				if (val == 1)                    				//Si el valor del indice j es mayor que el del j+1 se intercambian
				{
					temp = *(baseN + j);                   		//Se iguala la variable temporal al valor del indice j para el intercambio
					*(baseN + j) = *(baseN + j + 1);       		//Se iguala el indice j al j+1
					*(baseN + j + 1) = temp;               		//Se iguala el j+1 a la guardada en la variable temporal
				}
			}
		}
	}
}