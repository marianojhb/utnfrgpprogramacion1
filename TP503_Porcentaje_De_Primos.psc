Algoritmo Porcentaje_De_Primos
	// TP5 EJ3
	Escribir 'INGRESE NUM: '
	Leer num
	cantNumerosIngresados <- 0
	cantNumerosPrimos <- 0
	Mientras num<>0 Hacer
		cantDivisores <- 0
		Para i<-2 Hasta (num/2)+1 Hacer
			Si num % i==0 Entonces
				cantDivisores <- cantDivisores+1
			FinSi
		FinPara
		Si cantDivisores==0 Entonces
			cantNumerosPrimos <- cantNumerosPrimos+1
		FinSi
		cantNumerosIngresados <- cantNumerosIngresados+1
		Escribir 'INGRESE NUM: '
		Leer num
	FinMientras
	porcentajePrimos <- cantNumerosPrimos/cantNumerosIngresados*100
	porcentajeNoPrimos <- (cantNumerosIngresados-cantNumerosPrimos)/cantNumerosIngresados*100
	Escribir 'NUMEROS PRIMOS=', porcentajePrimos, '%'
	Escribir 'NUMEROS NO PRIMOS=', porcentajeNoPrimos, '%'
FinAlgoritmo
