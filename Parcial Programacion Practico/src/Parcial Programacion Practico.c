/*
 ============================================================================
 Name        : Parcial.c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : 1. Crear una función llamada aplicarAumento que reciba como parámetro
 el precio de un producto y devuelva el valor del producto con un aumento del 5%.
 Realizar la llamada desde el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float aplicarAumento(float precioProducto);

int main(void) {

	float precio = 0;
	float resultado;


	resultado = aplicarAumento(precio);

	if(precio != 0 ){
	printf("El resultado mas el porcentaje es %.2f",resultado);
	}

	return EXIT_SUCCESS;
}


float aplicarAumento(float precioProducto)
{
	float porcentajeASumar;
	float resultado = 0;

	if(precioProducto != 0 ){
	porcentajeASumar = (precioProducto*5) / 100;

	resultado = precioProducto + porcentajeASumar;
	}
	else
	{
		printf("El precio del producto tiene que ser distinto de 0");
	}

	return resultado;
}
