Algoritmo Invertido
	inverso <- 0;
	Escribir sin Saltar "Ingrese un n�mero entero: ";
	Leer numero;
	residuo <- numero;
	Mientras residuo > 0 Hacer
		inverso <- inverso * 10 + residuo mod 10;
		residuo <- (residuo - residuo mod 10) / 10;
	Fin Mientras
	Escribir "Valor del n�mero invertido ", inverso;
	Escribir "N�mero original ", numero;
FinAlgoritmo
