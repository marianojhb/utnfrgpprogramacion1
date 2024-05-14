Algoritmo Minimo_por_Grupo
	//TP507
	
	cantidadNumeros=0
	sumaNumeros=0
	definir minimo como entero
	primerMinimo=verdadero
	orden=1
	ordenMinimo=1
	
	definir minimoGeneral como entero
	grupo=1
	grupoMinimo=1
	primerMinimoGeneral=verdadero
	
	definir mayorPromedio como real
	grupoPromedio=1
	primerPromedio=verdadero
	
	definir promedio como real
	
	Para i=1 hasta 3
		
		mostrar "INGRESO "
		leer num
		
		mientras num<>0 hacer
			cantidadNumeros = cantidadNumeros+1
			sumaNumeros = sumaNumeros+num
			
			// Proceso Punto B
			si primerMinimo=verdadero Entonces
				minimo=num
				primerMinimo = falso
				ordenMinimo=orden
			SiNo
				si num<minimo Entonces
					minimo=num
					ordenMinimo=orden
				FinSi
			FinSi
			

			
			// reinicio while
			mostrar "INGRESO "
			leer num
			orden=orden+1
					
		FinMientras
		
		// fin grupos
		
		// Proceso Punto A
		promedio=sumaNumeros/cantidadNumeros
		mostrar "Promedio del grupo=", promedio
		
		mostrar "Minimo=", minimo
		mostrar "Posicion=", ordenMinimo
		
		// Proceso Punto B
		si primerMinimoGeneral==verdadero Entonces
			minimoGeneral=minimo
			primerMinimoGeneral=falso
		SiNo
			si minimo<minimoGeneral Entonces
				minimoGeneral=minimo
				grupoMinimo=grupo
			FinSi
		FinSi
		
		// Proceso Punto C
		Si primerPromedio == verdadero Entonces
			mayorPromedio = promedio
			primerPromedio = falso
			grupoPromedio=grupo
		SiNo
			si promedio>mayorPromedio Entonces
				mayorPromedio=promedio
				grupoPromedio=grupo
			FinSi
		FinSi
		
		grupo=grupo + 1
		
		// Reset variables
		cantidadNumeros=0
		sumaNumeros=0
		primerMinimo=verdadero
		orden=1
		
	FinPara
	// Salida Punto B
	mostrar "Minimo General=", minimoGeneral
	mostrar "Grupo=", grupoMinimo
	
	// Salida Punto C
	mostrar "Mayor Promedio=", mayorPromedio
	mostrar "Grupo=",grupoPromedio
	
FinAlgoritmo
