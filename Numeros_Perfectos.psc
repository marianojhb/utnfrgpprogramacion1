Algoritmo Numero_Perfecto
	Escribir "INGRESO "
	sd = 0
	// sd=suma de divisores
	Leer n
	Para i<-1 Hasta n-1 Con Paso 1 Hacer
		Si n%i==0 Entonces
			sd = sd+i
		FinSi
	FinPara
	Si sd==n Entonces
		Escribir n," es perfecto"
	SiNo
		Escribir n," no es perfecto"
	FinSi
FinAlgoritmo
