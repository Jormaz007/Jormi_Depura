# Jormi_Depura
v0.3	20210212	añadida sobrecarga y byte en binario

Constructor

Jormi_Depura();


texto
	Muestra una cadena de texto + \n
	Entrada: cadena de texto
void texto(String cadena);


salto
	Inserta linea en blanco
void salto();


Vble (sobrecargada)
	Muestra el valor de una variable INT / String / bool / float / byte / ulong
	String v, nombre variable
	x, vble a mostrar
void vble(String v, int x);
void vble(String v, String x);
void vble(String v, bool x);
void vble(String v, float x);
void vble(String v, byte x);
void vble(String v, unsigned long x);


Binario
	Muestra el valor de una variable byte en binario
	String v, nombre de la vble
	Byte x, vble que mostrar
void binario(String v, byte x);
