/*
	Jormi_Depura_h
	Librería para envio de mensajes de depuración
	v0.1	20200906
	v0.2	20210130

*/


#ifndef Jormi_Depura_h
#define Jormi_Depura_h

#include "Arduino.h"

class Jormi_Depura
{
private:	
		
public:

/*	
	Constructor
*/
Jormi_Depura();


/*
	texto
	Muestra una cadena de texto + \n
	Entrada: cadena de texto
*/
void texto(String cadena);


/*
	salto
	Inserta linea en blanco
*/
void salto();


/*
	xInt
	Muestra el valor de una variable INT
*/
void xInt(String v, int x);


/*
	xString
	Muestra el valor de una variable String
*/
void xString(String v, String x);


/*
	xBool
	Muestra el valor de una variable bool
*/
void xBool(String v, bool x);


/*
	xFloat
	Muestra el valor de una variable Float
*/
void xFloat(String v, float x);


/*
	xByte
	Muestra el valor de una variable byte
*/
void xByte(String v, byte x);


/*
	xULong
	Muestra el valor de una variable unsigned long
*/
void xULong(String v, unsigned long x);


};

#endif
