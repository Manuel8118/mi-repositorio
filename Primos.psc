Algoritmo Primos
	Escribir "Ingresa un número entero";
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
			Escribir "El número que ingresaste es primo";
		SiNo
			Escribir "El número que ingresaste no es primo";
	FinSi	
FinAlgoritmo
