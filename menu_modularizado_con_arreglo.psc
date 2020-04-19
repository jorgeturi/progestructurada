Funcion pedir_2_enteros ()      //funcion que pide dos enteros
	Escribir 'ingrese un numero, presione enter e ingrese el otro y presione enter'
FinFuncion

Funcion resultado_suma <- sumar_2_enteros (entero1 por valor,entero2 por valor)  //funcion que realiza la suma
	Definir resultado_suma Como Entero
	resultado_suma <- 0
	resultado_suma <- entero1+entero2
FinFuncion

Funcion resultado_resta <- restar_2_enteros (entero1 por valor,entero2 por valor)  //funcion que realiza la resta
	Definir resultado_resta Como Entero
	resultado_resta <- 0
	resultado_resta <- entero1-entero2
FinFuncion

Funcion si_vale_1_es_valido <- Verificar_divisor(numero2 por valor) //funcion que verifica si el divisor es 0
	si (numero2 == 0) entonces
		si_vale_1_es_valido=0     //si vale 0 es porque se ingreso un 0 en el divisor
	Sino
		si_vale_1_es_valido=1     //si vale 1 es valido dividir
	FinSi
FinFuncion

Funcion numero_ingresado=leer_numero ()  //funcion que lee el numero ingresado
	leer numero_ingresado
FinFuncion

Funcion mostrar_resultado (resultado)   //funcion que muestra el resultado
	Escribir 'el resultado es ',resultado
FinFuncion

Funcion resultado_multiplic <- multiplic_2_enteros (entero1 por valor,entero2 por valor)  //funcion que realiza la multiplicacion
	Definir resultado_multiplic Como Entero
	resultado_multiplic <- 0
	resultado_multiplic <- entero1*entero2
FinFuncion

Funcion resultado_divi <- divi_2_enteros (entero1 por valor,entero2 por valor)  //funcion que realiza la division
	Definir resultado_divi Como Real
	resultado_divi <- 0
	resultado_divi <- entero1/entero2
FinFuncion

Funcion tecla_para_continuar () //funcion que espera una tecla para continuar
	Escribir 'presione enter para continuar'
	Leer espero_tecla
FinFuncion

Funcion mostrar_menu(numeros_de_opcion Por Referencia,valor_de_opcion Por Referencia, longitud_vector Por Valor) //funcion que muestra el menu
	Escribir 'Menú de operaciones'   //parte superior del menu
	definir separador como caracter  //caracter que separa el numero de opcion con el valor de la opcion
	separador = "|" 
    definir i como entero
	para i=0 hasta longitud_vector-1 con paso 1 hacer  //muestro los valores medios del menu
		Escribir "",numeros_de_opcion[i],separador,valor_de_opcion[i]
	FinPara
	Escribir '' 
	Escribir 'elija su opcion'  //parte inferior del menu
FinFuncion

funcion definicion_de_arreglos (longitud_vector Por Valor, a_mostrar_en_menu, num_opcion_en_menu)

	a_mostrar_en_menu[0] <- "Suma"
	a_mostrar_en_menu[1] <- "Resta"
	a_mostrar_en_menu[2] <- "Multiplicacion"
	a_mostrar_en_menu[3] <- "Division"
	a_mostrar_en_menu[4] <- "Salir"
	

	num_opcion_en_menu[0] = "1"        //definicion de numero de opciones que van junto con lo a mostrar en menu
	num_opcion_en_menu[1] = "2"
	num_opcion_en_menu[2] = "3"
	num_opcion_en_menu[3] = "4"
	num_opcion_en_menu[4] = "0"
FinFuncion



Algoritmo sin_titulo
	definir longitud_vector como entero
	longitud_vector=5
	Dimension a_mostrar_en_menu[longitud_vector]
	dimension num_opcion_en_menu[longitud_vector]

	Definir opcion_elegida Como caracter
	definir confirmacion como caracter 
	opcion_elegida <- 'f'
	definicion_de_arreglos(longitud_vector, a_mostrar_en_menu, num_opcion_en_menu )
	Mientras (opcion_elegida!='0') Hacer
		mostrar_menu(num_opcion_en_menu,a_mostrar_en_menu, longitud_vector)
		Leer opcion_elegida
		Segun opcion_elegida  Hacer
			'1':
				pedir_2_enteros()
				numero1=leer_numero()
				numero2=leer_numero()
				resultado <- sumar_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			'2':
				pedir_2_enteros()
				numero1=leer_numero()
				numero2=leer_numero()
				resultado <- restar_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			'3':
				pedir_2_enteros()
				numero1=leer_numero()
				numero2=leer_numero()
				resultado <- multiplic_2_enteros(numero1,numero2)
				mostrar_resultado(resultado)
				tecla_para_continuar()
				Borrar Pantalla
			'4':
				pedir_2_enteros()
				numero1=leer_numero()
				numero2=leer_numero()
				si_vale_1_es_valido=verificar_divisor(numero2)
				si (si_vale_1_es_valido==1)
					resultado <- divi_2_enteros(numero1,numero2)
					mostrar_resultado(resultado)
					tecla_para_continuar()
					Borrar Pantalla
				SiNo
					Escribir "el resultado es infinito"
					tecla_para_continuar()
					Borrar Pantalla
				FinSi
			'0':
				Escribir 'seguro que queres salir (s/n)'
				Leer confirmacion
				Si (confirmacion=='s' O confirmacion=='S') Entonces
					opcion_elegida <- '0'
				SiNo
					Escribir 'entonces volvemos'
					opcion_elegida <- '80'
					tecla_para_continuar()
					Borrar Pantalla
				FinSi
			De Otro Modo:
				Escribir 'opcion no valida'
				Escribir 'Debe ingresar una opcion del 1 al 4 o 0'
				tecla_para_continuar()
				Borrar Pantalla
				
				
		FinSegun
	FinMientras
FinAlgoritmo
