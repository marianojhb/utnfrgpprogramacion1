Algoritmo Alternados
	gruposAlterna = 0
	alterna = verdadero
	// grupo alterna por default
	Para k<-1 Hasta 20 Con Paso 1 Hacer
		Para j<-1 Hasta 10 Con Paso 1 Hacer
			Escribir 'INGRESO '
			Leer n
			sumaDivisores = 0
			Para i<-1 Hasta n-1 Con Paso 1 Hacer
				Si n%i==0 Entonces
					sumaDivisores = sumaDivisores+i
				FinSi
			FinPara
			Si sumaDivisores==n Entonces
				perfecto = verdadero
			SiNo
				perfecto = falso
			FinSi
			Si j==1 Entonces
				ultimo = perfecto
			SiNo
				anteultimo = ultimo
				ultimo = perfecto
				Si anteultimo==ultimo Entonces
					alterna = falso
				FinSi
			FinSi
			gruposAlterna = gruposAlterna+1
		FinPara
		Escribir 'Cantidad de grupos alternados=',gruposAterna
	FinPara
FinAlgoritmo
