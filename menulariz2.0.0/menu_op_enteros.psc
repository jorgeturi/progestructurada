funcion pedir_2_enteros ()
	escribir "ingrese dos enteros, separados por una coma"
FinFuncion

funcion leer_2_enteros ()
	leer entero1 
	leer entero2
FinFuncion

funcion resultado_suma <- suma_2_enteros (numero1 ,numero2)
	resultado=numero1+numero2
FinFuncion

funcion mostrar_resultado (resultado)
	escribir "el resultado es", resultado
FinFuncion

Algoritmo Calculadora_Enteros
	Definir OP Como Entero
	Definir si_no Como Caracter
	Repetir
		// mostrar menu
		Limpiar Pantalla
		Escribir "Menú de operaciones"
		Escribir "   1. Suma"
		Escribir "   2. Resta"
		Escribir "   3. Multiplicación"
		Escribir "   4. División"
		Escribir "   5. Salir"
		// ingresar una opcion
		Escribir "Elija una opción (1-5): "
		Leer OP
		// procesar esa opción
		Segun OP Hacer
			1:
				pedir_2_enteros()
				leer_2_enteros()
				resultado=suma_2_enteros(entero1,entero2)
				mostrar_resultado(resultado)
			2:
				pedir_2_enteros()
				leer_2_enteros()
				resultado=suma_2_enteros(entero1,-entero2)
				mostrar_resultado(resultado)
			3:
				pedir_2_enteros()
				leer_2_enteros()
				resultado=multi_2_enteros(entero1,entero2)
				mostrar_resultado(resultado)
			4:
				pedir_2_enteros()
				leer_2_enteros()
				si 2 entero es 0, pedir hasta que no lo sea
				resultado=division_2_enteros(entero1,entero2)
				mostrar_resultado(resultado)
			5:
				Repetir
					Limpiar Pantalla
				    Escribir "Esta seguro que quiere salir (S/N)"
					Leer si_no
					Segun si_no Hacer
						'S':
						Fin Algoritmo
					
						De Otro Modo:
							Escribir "volvemos al menu"
							Esperar Tecla
					FinSegun
				
		Si OP <> 5 Y OP <> 0 Entonces
			Escribir "Presione enter para continuar"
			Esperar Tecla			
		FinSi
	Hasta Que OP=5
FinAlgoritmo
