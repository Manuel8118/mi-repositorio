Algoritmo Primos
	Escribir "Ingresa un n�mero entero";
	Leer numeroentrada;
	repeticion=1;
	ResiduoCero=0;
	Mientras repeticion <= numeroentrada Hacer
		Si(numeroentrada % repeticion == 0) Entonces
			ResiduoCero = ResiduoCero +1;
		FinSi
		repeticion=repeticion +1;
	Fin Mientras
	si(ResiduoCero==2) Entonces
			Escribir "El n�mero que ingresaste es primo";
		SiNo
			Escribir "El n�mero que ingresaste no es primo";
	FinSi	
FinAlgoritmo
