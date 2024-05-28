Algoritmo TP520
	Mostrar "a,d,q,p="
	Leer a,d,q,p
	qsum=0
	qmax=0
	qamax=0
	q1sum=0
	q2sum=0
	aqmaxq=0
	Mientras a<>0
		qsum=0
		psum=0
		ultimo=a
		Mientras ultimo==a
			Si d<16 Entonces
				q1sum=q1sum+q
				qsum=qsum+q
			SiNo
				q2sum=q2sum+q
			FinSi
			psum=psum+p
			Si q>aqmaxq
				aqmaxq=q
				aqmaxa=a
				aqmaxd=d
			FinSi
			Mostrar "a,d,q,p="
			Leer a,d,q,p
		FinMientras
		Si qsum>qmax Entonces
			qmax=qsum
			qamax=ultimo
		FinSi
		Mostrar "Punto (b). Para cada uno de los artículos informar la recaudación total del mes."
		Mostrar  "psum=",psum
	FinMientras
	Mostrar " Punto (c) Informar en cual quincena se vendió mayor cantidad de unidades totales:"
	Si q1sum>q2sum Entonces
		Mostrar "q1 se vendió más=",q1sum
	SiNo
		Mostrar"q2 se vendió más=",q2sum
	FinSi
	Mostrar "Punto (a) El número de artículo más vendido en unidades totales considerando las ventas de la primera quince"
	Mostrar "qamax=",qamax," qmax=",qmax
	Mostrar "" 
	Mostrar "Punto (d) Informar el número de artículo del que más se haya vendido en cantidad de unidades en una venta individual indicando además en qué día fue esa venta"
	Mostrar "aqmax=",aqmax,"aqmaxd=",aqmaxd
	
FinAlgoritmo
