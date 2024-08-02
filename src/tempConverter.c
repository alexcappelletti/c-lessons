/* File: hanoi.c */
/* Time-stamp: "2001-03-27 20:34:02 calvanes" */
/* Scopo: esempio di funzione con ricorsione multipla */

/* Programma delle Torri di Hanoi, con richiesta del numero di dischi, della
sorgente e della destinazione da input. */

#include <stdio.h>
#include <assert.h>
#include <stdbool.h> 
void celsiusToFahrenheit()
{
	double tc, tf, conv, offset;
	conv = 5. / 9.;
	offset = 32.;
	printf("Inserisci la temperatura in gradi Celsius \n");
	scanf("%lf", &tc);
	tf = tc / conv + offset;
	printf("La temperatura in gradi Fahrenheit vale %5.2f", tf);
	printf("(=%5.2f / %5.2f - %3.1f) gradi\n", tc, conv, offset);
}

void celsiusToKelvin(){assert(true && "to be implemented");} //signals to be implemented
void fahrenheitToCelsius() { assert(true && "to be implemented"); }; // signals to be implemented
void fahrenheitToKelvin() { assert(true && "to be implemented"); };	 // signals to be implemented
void kelvinToCelsius() { assert(true && "to be implemented"); };	 // signals to be implemented
void kelvinToFahrenheit() { assert(true && "to be implemented"); };	 // signals to be implemented
