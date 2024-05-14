Algoritmo Maximo_De_Pares_y_Maximo_de_Impares
	// TP504
	cuentaGrupo = 0
	// punto a:
	primerPar = falso // bandera
	primerImpar = falso // bandera
	// punto b:
	cantidadNegativos = 0
	cantidadPositivos = 0
	cantidadNumeros = 0
	porcentajeNegativos = 0
	porcentajePositivos = 0
	cantidadPositivosGeneral = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Escribir 'INGRESE NUM: '
		Leer num
		Si num!=0 Entonces
			cantidadNumeros = cantidadNumeros+1
		SiNo
			Si (num%2==0)&(num!=0) Entonces
				maxPar = num
				primerPar = verdadero
			SiNo
				maxImpar = num
				primerImpar = verdadero
				Escribir 'primerImpar=verdadero'
			FinSi
		FinSi
		Mientras num!=0 Hacer
			// Punto a - proceso
			Si (num%2==0)&(primerPar==falso) Entonces
				maxPar = num
				primerPar = verdadero
			SiNo
				Si (num%2==0)&(num>maxPar) Entonces
					maxPar = num
				SiNo
					Si (num%2!=0)&(primerImpar==falso) Entonces
						maxImpar = num
						primerImpar = verdadero
					SiNo
						Si (num%2!=0)&(num>maxImpar) Entonces
							maxImpar = num
						FinSi
					FinSi
				FinSi
			FinSi
			// punto b - proceso
			Si num<0 Entonces
				cantidadNegativos = cantidadNegativos+1
			SiNo
				Si num>0 Entonces
					cantidadPositivos = cantidadPositivos+1
					// Punto c:
					cantidadPositivosGeneral = cantidadPositivosGeneral+1
				FinSi
			FinSi
			Escribir 'INGRESE NUM: '
			Leer num
			Si num!=0 Entonces
				cantidadNumeros = cantidadNumeros+1
			FinSi
		FinMientras
		cuentaGrupo = cuentaGrupo+1
		Escribir 'Fin grupo=',cuentaGrupo
		Escribir 'Punto a'
		Si primerPar=verdadero Entonces
			Escribir 'Maximo Par=',maxPar
		SiNo
			Escribir 'No hay pares en este grupo'
		FinSi
		Si primerImpar=verdadero Entonces
			Escribir 'Maximo Impar=',maxImpar
		SiNo
			Escribir 'No hay impares en este grupo'
		FinSi
		Escribir 'Punto b'
		Si cantidadNumeros!=0 Entonces
			porcentajePositivos = cantidadPositivos/cantidadNumeros*100
			porcentajeNegativos = cantidadNegativos/cantidadNumeros*100
		FinSi
		Escribir 'Cantidad de numeros=',cantidadNumeros
		Escribir 'Cantidad de positivos=',cantidadPositivos
		Escribir 'Cantidad de negativos=',cantidadNegativos
		Escribir 'Porcentaje de positivos=',porcentajePositivos,'%'
		Escribir 'Porcentaje de negativos=',PorcentajeNegativos,'%'
		// Reseteo variables por grupo
		primerPar = falso
		primerImpar = falso
		cantidadNumeros = 0
		cantidadPositivos = 0
		cantidadNegativos = 0
		porcentajePositivos = 0
		PorcentajeNegativos = 0
		Escribir '---------------------------------------------------------------'
	FinPara
	// Positivos totales entre los grupos
	Escribir 'Positivos Totales=',cantidadPositivosGeneral
FinAlgoritmo
