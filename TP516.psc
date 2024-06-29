Algoritmo TP516
	suma1 = 0
	u1 = 0
	suma2 = 0
	u2 = 0
	suma3 = 0
	u3 = 0
	pa = verdadero
	Escribir 'INGRESE ART, UNIDADES, IMPORTE:'
	Leer n
	Leer u
	Leer importe
	Mientras n<>0 Hacer
		Segun n  Hacer
			1:
				suma1 = suma1+importe
				u1 = u1+u
			2:
				suma2 = suma2+importe
				u2 = u2+u
			3:
				suma3 = suma3+importe
				u3 = u3+u
		FinSegun
		Si u1>u2 & u1>u3 Entonces
			umax = u1
			nmax = 1
		SiNo
			Si u2>u3 Entonces
				umax = u2
				nmax = 2
			SiNo
				umax = u3
				nmax = 3
			FinSi
		FinSi
		Escribir 'INGRESE ART, UNIDADES, IMPORTE: '
		Leer n
		Leer u
		Leer importe
	FinMientras
	Escribir 'articulo1 ventas=',suma1,' articulo2 ventas=',suma2,' articulo3 ventas=',suma3
	Escribir "articulo mas unidades=",nmax," con ",umax," unidades" 
FinAlgoritmo
