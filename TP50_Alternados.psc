Algoritmo TP515
	gruposAlternados = 0
	Escribir "INGRESO "
	// si alternado 0 o 1, sino no-alternado
	Para i<-1 Hasta 2 Con Paso 1 Hacer
		perfecto = 0
		Para j<-1 Hasta 8 Con Paso 1 Hacer
			sd = 0
			Leer n
			Para k<-1 Hasta n-1 Con Paso 1 Hacer
				Si n%k==0 Entonces
					sd = sd+k
					Escribir "sd=",sd
				FinSi
			FinPara
			Si sd==n Entonces
				ultimo = verdadero
			SiNo
				ultimo = falso
			FinSi
		FinPara
	FinPara
	Escribir "Cantidad grupos con numeros perfectos y no perfectos alternados=",gruposAlternados
FinAlgoritmo
