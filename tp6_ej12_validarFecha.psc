Algoritmo validarFecha
	fechaValida = false
	Leer dia,mes,anio
	Si dia<=31 && mes<=12 Entonces
		Si dia<=28 && mes<=12 Entonces
			fechaValida = true
		SiNo
			Si mes==1==3==5==7==8==10==12 Entonces
				fechaValida = true
			SiNo
				Si dia<=30 Entonces
					Si mes!=2 Entonces
						fechaValida = true
					SiNo
						Si EsBisieston && dia==29 Entonces
							fechaValida = true
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
