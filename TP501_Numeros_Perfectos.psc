Algoritmo Numeros_Perfectos
	// Guia 5, Ejercicio 1
	cuentaNumerosPerfectos=0
	Para j=1 hasta 3 Hacer
		sumaDivisores = 0
		Mostrar "INGRESE NUM "
		Leer num
		Para i=1 Hasta num-1 Hacer
			si num%i==0 Entonces
				sumaDivisores=sumaDivisores+i
			FinSi
		FinPara
		si sumaDivisores == num Entonces
			cuentaNumerosPerfectos = cuentaNumerosPerfectos + 1
		FinSi
	FinPara
	mostrar "Se encontraron ", cuentaNumerosPerfectos, " numeros perfectos"
	
FinAlgoritmo
