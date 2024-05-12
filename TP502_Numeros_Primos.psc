Algoritmo Numeros_Primos
	// Guia 5, Ejercicio 2
	cuentaNumerosPrimos=0
	Para j=1 hasta 3 Hacer
		cantDivisores=0
		Mostrar "INGRESE NUM "
		Leer num
		para i=2 hasta (num/2)+1 Hacer
			si num%i == 0 Entonces
				cantDivisores = cantDivisores+1
			FinSi
		FinPara
		Mostrar  "Cantidad de divisores: ", cantDivisores
		Si cantDivisores == 0 Entonces
			cuentaNumerosPrimos = cuentaNumerosPrimos+1
		FinSi
	FinPara
	mostrar "CANT NUM PRIMOS=", cuentaNumerosPrimos
FinAlgoritmo
