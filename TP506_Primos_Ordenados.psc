Algoritmo Primos_Ordenados
	//TP0506
	mostrar "INGRESO "
	leer num
	
	
	
	divisores=0
	definir ultimoPrimo como entero
	primerPrimo=falso
	ordenados=verdadero
	
	mientras num<>0 Hacer
		para i=1 hasta num Hacer
			si num%i==0 Entonces
				divisores=divisores+1
			FinSi
		FinPara
		si divisores==2 Entonces
			si primerPrimo=falso Entonces
				primerPrimo=verdadero
			sino 
				si ultimoPrimo>num entonces
					ordenados=falso
				FinSi
			FinSi
			ultimoPrimo=num
		FinSi
		divisores=0
		
		// reinicio while
		mostrar "INGRESO "
		leer num
		
	FinMientras
	si ordenados Entonces
		mostrar "Ordenados"
	SiNo
		mostrar "desordenados"
	FinSi
FinAlgoritmo
