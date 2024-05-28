Algoritmo TP517
	Escribir 'ART '
	Leer art
	Escribir 'U '
	Leer u
	Escribir 'IMPORTE '
	Leer importe
	umax = 0
	artmax = 0
	Mientras art!=0 Hacer
		ultimo = art
		sumart = 0
		Mientras art!=0&art==ultimo Hacer
			sumart = sumart+importe
			Si sumart>umax Entonces
				artmax = art
				umax = sumart
			FinSi
			Escribir 'sumart=',sumart
			Escribir 'Art '
			Leer art
			Escribir 'u '
			Leer u
			Escribir 'Importe '
			Leer importe
		FinMientras
		Escribir 'Suma lote. Art=',art,' Suma=',sumart
		Escribir 'articulo '
		Leer art
		Escribir 'unidades '
		Leer u
		Escribir 'importe '
		Leer importe
	FinMientras
	Escribir "Mayor articulo=",artmax," cantidad=",umax
FinAlgoritmo
