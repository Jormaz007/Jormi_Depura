	Jormi_Depura
	v0.3	20210212	añadida sobrecarga y byte en binario


	Jormi_Depura()
		Constructor
	

	void texto(String cadena)
		texto - Muestra una cadena de texto + \n
		

	void salto()
		Inserta linea en blanco
	
	void vble(String v, int x)
	void vble(String v, String x)
	void vble(String v, bool x)
	void vble(String v, float x)
	void vble(String v, byte x)
	void vble(String v, unsigned long x);
		Muestra un texto (nombre vble) y valor de una variable (función sobrecargada) INT / String / bool / float / byte / ulong
		v : texto_a_mostrar
		x : vble_a_mostrar


	void binario(String v, byte x)
		Muestra el valor de una variable byte en binario
		v : nombre de la vble
		x : vble que mostrar
