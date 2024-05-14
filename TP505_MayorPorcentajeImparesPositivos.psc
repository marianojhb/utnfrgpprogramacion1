Algoritmo MayorPorcentajeImparesPositivos
	//TP0505
	definir num como entero
	grupo=1
	

	// Variables Punto A
	cuentaImparPositivo=0
	cuentaNumerosPorGrupo=0
	definir porcentaje como real
	definir maximoGrupo como entero 
	primerGrupo = falso
	
	// Variables Punto B
	ordenPrimo=0
	divisores=0
	ultimoPrimo=0
	
	// Variables Punto C
	ordenados=verdadero
	definir ultimoIngreso como entero;
	gruposOrdenados=0
	
	// Proceso entradas
	Para i=1 hasta 10 hacer
		mostrar "INGRESO NUM "
		leer num	
		orden=1
		cuentaNumerosPorGrupo=cuentaNumerosPorGrupo+1
		ultimoIngreso=num
		
		mientras num<>0 hacer
			
			// Proceso Punto A
			si num%2<>0 entonces
				si num>0 entonces
					cuentaImparPositivo=cuentaImparPositivo+1
				FinSi
			FinSi
			
			// Proceso Punto B
			
			si num>0 entonces
				para j=1 hasta num hacer
					si num%j==0 entonces
						divisores= divisores+1
					FinSi
				FinPara
			FinSi
			Si divisores==2 entonces
				ultimoPrimo=num
				ordenPrimo=orden
			FinSi
			
			// Proceso Punto C
			si ultimoIngreso<num entonces
				ordenados=falso
			FinSi
			
			
			// Reinicio while
			mostrar "INGRESO NUM "
			leer num
			Si num <>0 entonces
				cuentaNumerosPorGrupo=cuentaNumerosPorGrupo+1
				orden=orden+1
			FinSi
			
			// Reseteo divisores
			divisores=0	
		FinMientras
		Mostrar "Fin Grupo ", grupo
		
		
		// Proceso Punto A
		porcentaje = cuentaImparPositivo / cuentaNumerosPorGrupo * 100


		Si primerGrupo=falso entonces
			maximoGrupo = grupo
			maximoPorcentaje = porcentaje
			primerGrupo=verdadero
		FinSi
		Si (porcentaje>maximoPorcentaje) entonces
			maximoPorcentaje=porcentaje
			maximoGrupo=grupo
			
		FinSi
		
		// Punto B
		Si ultimoPrimo <>0 entonces
			Mostrar "Ultimo primo=",ultimoPrimo
			Mostrar "Orden=", ordenPrimo
		Sino
			Mostrar "No hay primos en el grupo"
		FinSi
		
		// Punto C
		Si ordenados=verdadero Entonces
			gruposOrdenados = gruposOrdenados+1
		FinSi
		
		Mostrar "----------------------------------------------------------"
		
		// Reseteo variables por grupo
		grupo=grupo+1
		cuentaImparPositivo=0
		cuentaNumerosPorGrupo=0
		ordenPrimo=0
		ordenados=verdadero
		

	FinPara

	// Punto A
	Mostrar "Maximo porcentaje=",maximoPorcentaje,"%"
	Mostrar "Grupo=",maximoGrupo
	
	// Punto C
	Si gruposOrdenados == 0 Entonces
		mostrar "No hay grupos ordenados"
	SiNo
		mostrar "Grupos ordenados=", gruposOrdenados
	FinSi
FinAlgoritmo
