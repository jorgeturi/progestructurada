Funcion pedir_2_enteros ()
	escribir "ingrese dos numeros enteros separados por una coma"
FinFuncion

Funcion resultado_suma<- sumar_2_enteros (entero1 Por Valor,entero2 por valor) 
	resultado_suma Es Entero
	resultado_suma=0
	resultado_suma=entero1+entero2
FinFuncion
	
Funcion mostrar_resultado (resultado)
		Escribir "el resultado es ", resultado
FinFuncion

Funcion resultado_multiplic<-multiplic_2_enteros (entero1 Por Valor,entero2 por valor) 
	resultado_multiplic Es Entero
	resultado_multiplic=0
	resultado_multiplic=entero1*entero2
FinFuncion

Funcion resultado_divi<-divi_2_enteros (entero1 Por Valor,entero2 por valor) 
	resultado_divi Es real
	resultado_divi=0
	resultado_divi=entero1/entero2
FinFuncion

Funcion tecla_para_continuar ()
	Escribir "presione enter para continuar"
	leer espero_tecla
FinFuncion

Algoritmo sin_titulo
	opcion_elegida es entero
	opcion_elegida = 0
	
	Mientras (opcion_elegida !=5)
		Escribir "Menú de operaciones"
		Escribir "   1. Suma"
		Escribir "   2. Resta"
		Escribir "   3. Multiplicación"
		Escribir "   4. División"
		Escribir "   5. Salir"
		Escribir ""
		Escribir "elija su opcion"
		leer opcion_elegida
		
		Segun opcion_elegida hacer
			1:
				pedir_2_enteros()
				leer numero1,numero2
				resultado=sumar_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			2:
				pedir_2_enteros()
				leer numero1,numero2
				resultado=sumar_2_enteros(numero1,-numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			3:
				pedir_2_enteros()
				leer numero1,numero2
				resultado=multiplic_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			4:
				pedir_2_enteros()
				leer numero1,numero2
				resultado=divi_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			5:
				Escribir "seguro que queres salir (s/n)"
				leer confirmacion
				si (confirmacion =='s' o confirmacion =='S')
                Escribir "termina el programa"
				SiNo
				Escribir "entonces volvemos"
				opcion_elegida=80
				tecla_para_continuar()
				Borrar Pantalla
				Fin si
			De Otro Modo:
				Escribir "opcion no valida"
				Escribir "Debe ingresar una opcion del 1 al 5"
				tecla_para_continuar()
				Borrar Pantalla
		FinSegun
	FinMientras
FinAlgoritmo
