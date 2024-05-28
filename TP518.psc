Algoritmo TP518
	minpt2 = 0
	minst2 = 0
	minibool = verdadero
	Escribir 'ingreso'
	Leer s,d,i,t,f
	Mientras s!=0 Hacer
		si_ = 0
		ct = 0
		cf = 0
		s1 = 0
		s2 = 0
		s3 = 0
		sif1 = 0
		sif2 = 0
		sif3 = 0
		sit2 = 0
		mi1 = 0
		mi2 = 0
		i1 = verdadero
		i2 = verdadero
		ultima = s
		Mientras ultima==s Hacer
			si_ = si_+i
			ct = ct+1
			cf = cf+1
			Segun t  Hacer
				1:
					sif1 = sif1+i
				2:
					sif2 = sif2+i
				3:
					sif3 = sif3+i
			FinSegun
			Si t==2 Entonces
				sit2 = sit2+i
			FinSi
			Si i1=verdadero Entonces
				mi1 = i
				i1 = falso
			SiNo
				Si i2=verdadero Entonces
					i2 = falso
					Si i>mi1 Entonces
						mi2 = mi1
						mi1 = i
					SiNo
						mi2 = i
					FinSi
				SiNo
					Si i>mi1 Entonces
						mi2 = mi1
						mi1 = i
					SiNo
						Si i>mi2 Entonces
							mi2 = i
						FinSi
					FinSi
				FinSi
			FinSi
			Si minibool=verdadero Entonces
				minibool = falso
				minit = i
				minits = s
				minitd = d
				minitf = f
			SiNo
				Si i<minit Entonces
					minit = i
					minits = s
					minitd = d
				FinSi
			FinSi
			Escribir 'fin vuelta item'
			Escribir 'ingreso'
			Leer s,d,i,t,f
		FinMientras
		Escribir 'fin vuelta sucursal'
		p1 = sif1*100/si_
		p2 = sif2*100/si_
		p3 = sif3*100/si_
		Escribir 'p1=',p1,' p2=',p2,' p3=',p3
		pt2 = sit2/si_*100
		Si pt2<minpt2 Entonces
			minst2 = s
			minpt2 = pt2
		FinSi
		Escribir 'mi1=',mi1,' mi2=',mi2
	FinMientras
	Escribir 'minst2',minst2,'minpt2',minpt2
FinAlgoritmo
