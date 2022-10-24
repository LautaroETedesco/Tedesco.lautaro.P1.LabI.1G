/*
 ============================================================================
 Name        : Parcial.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : 2. Crear una función que se llame reemplazarCaracteres
  que reciba una cadena de caracteres como primer parámetro,
  un carácter como segundo y otro carácter  como tercero,
    la misma deberá reemplazar cada ocurrencia del segundo parámetro por el tercero
    y devolver la cantidad de veces que se reemplazo ese carácter  en la cadena

 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>

int reemplazarCaracteres(char *cadenaDeCaracteres[], char caracterUno, char caracterDos);

int main(void) {

	char cadena[5] = {"Hola"};
	char caracterA = 'a';
	char caracterB = 'o';

	printf("La cadena original es %s",cadena);
	reemplazarCaracteres(&cadena,caracterA,caracterB);
	printf("La cadena original es %s",cadena);

	return EXIT_SUCCESS;
}


int reemplazarCaracteres(char *cadenaDeCaracteres[], char caracterUno, char caracterDos)
{
	int contador = 0;
	int largoCadena = 0;

	largoCadena = sizeof(*cadenaDeCaracteres);

	for(int i = 0 ; i < largoCadena ; i++ )
	{
		if(cadenaDeCaracteres[i] == caracterUno)
		{
			strcpy(cadenaDeCaracteres[i],caracterDos);
			contador = contador++;
		}
	}

	return contador;
}
