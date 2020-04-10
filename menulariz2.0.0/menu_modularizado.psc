Funcion pedir_2_enteros ()
	Escribir 'ingrese dos numeros enteros separados por una coma'
FinFuncion

Funcion resultado_suma <- sumar_2_enteros (entero1 por valor,entero2 por valor)
	Definir resultado_suma Como Entero
	resultado_suma <- 0
	resultado_suma <- entero1+entero2
FinFuncion

Funcion mostrar_resultado (resultado)
	Escribir 'el resultado es ',resultado
FinFuncion

Funcion resultado_multiplic <- multiplic_2_enteros (entero1 por valor,entero2 por valor)
	Definir resultado_multiplic Como Entero
	resultado_multiplic <- 0
	resultado_multiplic <- entero1*entero2
FinFuncion

Funcion resultado_divi <- divi_2_enteros (entero1 por valor,entero2 por valor)
	Definir resultado_divi Como Real
	resultado_divi <- 0
	resultado_divi <- entero1/entero2
FinFuncion

Funcion tecla_para_continuar ()
	Escribir 'presione enter para continuar'
	Leer espero_tecla
FinFuncion

Algoritmo sin_titulo
	Definir opcion_elegida Como Entero
	opcion_elegida <- 20
	Mientras (opcion_elegida!=0) Hacer
		Escribir 'Menú de operaciones'
		Escribir '   1. Suma'
		Escribir '   2. Resta'
		Escribir '   3. Multiplicación'
		Escribir '   4. División'
		Escribir '   0. Salir'
		Escribir ''
		Escribir 'elija su opcion'
		Leer opcion_elegida
		Segun opcion_elegida  Hacer
			1:
				pedir_2_enteros()
				Leer numero1,numero2
				resultado <- sumar_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			2:
				pedir_2_enteros()
				Leer numero1,numero2
				resultado <- sumar_2_enteros(numero1,-numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			3:
				pedir_2_enteros()
				Leer numero1,numero2
				resultado <- multiplic_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			4:
				pedir_2_enteros()
				Leer numero1,numero2
				resultado <- divi_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			0:
				Escribir 'seguro que queres salir (s/n)'
				Leer confirmacion
				Si (confirmacion=='s' O confirmacion=='S') Entonces
					Escribir 'termina el programa'
					opcion_elegida=0
				SiNo
					Escribir 'entonces volvemos'
					opcion_elegida <- 80
					tecla_para_continuar()
					Borrar Pantalla
				FinSi
			De Otro Modo:
				Escribir 'opcion no valida'
				Escribir 'Debe ingresar una opcion del 1 al 5'
				tecla_para_continuar()
				Borrar Pantalla
		FinSegun
	FinMientras
FinAlgoritmo
