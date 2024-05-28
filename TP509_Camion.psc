Algoritmo Camion
	Escribir 'INGRESO '
	Leer peso
	carga = 0
	cam = 1
	encomiendas = 0
	camionMax = 1
	Mientras carga<=200 & peso>0 Hacer
		Si carga+peso<=200 Entonces
			carga = carga+peso
			encomiendas = encomiendas+1
		SiNo
			Escribir 'camion=',cam
			Escribir 'carga=',carga
			Si cam==1 Entonces
				encmax = encomiendas
			SiNo
				Si encomiendas>encmax Entonces
					encmax = encomiendas
					camionMax = cam
				FinSi
			FinSi
			cam = cam+1
			carga = peso
		FinSi
		mostrar encomiendas
		Escribir 'INGRESO '
		Leer peso
	FinMientras
	Escribir "Camion mas encomiendas=",camionMax," encomiendas=",encmax
FinAlgoritmo
