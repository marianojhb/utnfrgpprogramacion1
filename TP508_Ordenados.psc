Algoritmo TP508
	Para j<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'ingreso '
		Leer n
		ultimo = n-1
		primos = 0
		primer_numero_par = verdadero
		primer_positivo = verdadero
		Mientras n>ultimo Hacer
			ultimo = n
			divisores = 0
			Para i<-1 Hasta n Con Paso 1 Hacer
				Si (n%i==0) & (n>0) Entonces
					divisores = divisores+1
				FinSi
			FinPara
			Si (divisores==2) Entonces
				primos = primos+1
			FinSi
			Si n%2==0 Entonces
				Si primer_numero_par==verdadero Entonces
					menor_par = n
					primer_numero_par = falso
				SiNo
					Si n<menor_par Entonces
						menor_par = n
					FinSi
				FinSi
			FinSi
			Si n>0 Entonces
				Si primer_positivo==verdadero Entonces
					ultimo_positivo = n
					primer_positivo = falso
				SiNo
					anteultimo_positivo = ultimo_positivo
					ultimo_positivo = n
				FinSi
			FinSi
			Escribir 'ingreso '
			Leer n
		FinMientras
		Escribir 'Fin grupo'
		Escribir 'primos=',primos
		Escribir 'menor par=',menor_par
		Escribir 'anteultimo_positivo=',anteultimo_positivo
		Escribir 'ultimo_positivo=',ultimo_positivo
	FinPara
FinAlgoritmo
