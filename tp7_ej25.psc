Algoritmo TP7_Ej25
	tam = 20
	Dimension pcont[tam]
	Dimension ptarj[tam]
	// vectora0(pcont,tam)
	vectora0(pcont)
	// vectora0(ptarj,tam)
	// Lote de carga:
	Para i<-i=0 Hasta tam Con Paso 1 Hacer
		Leer pcont[i]
		Leer ptarj[i]
	FinPara
	// Lote de registros:
FinAlgoritmo

Funcion vectora0(pcont,ptarj)
	Para i<-i=0 Hasta tam Con Paso 1 Hacer
		pcont[i] = 0
		ptarj[i] = 0
	FinPara
FinFuncion
