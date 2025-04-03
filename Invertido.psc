Algoritmo Invertido
	inverso <- 0;
	Escribir sin Saltar "Ingrese un número entero: ";
	Leer numero;
	residuo <- numero;
	Mientras residuo > 0 Hacer
		inverso <- inverso * 10 + residuo mod 10;
		residuo <- (residuo - residuo mod 10) / 10;
	Fin Mientras
	Escribir "Valor del número invertido ", inverso;
	Escribir "Número original ", numero;
FinAlgoritmo
