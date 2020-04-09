#include "DeclaraFunciones+librerias.h" //aca estan las declaraciones de las funciones y librerias

int main()
{
    int opcion_elegida=0; //variable para las opciones del menu
    int resultado=0;         //variable para el resultado de suma,resta y multiplicacion
    float resultadodiv=0.0;  //variable para el resultado de la division
    int numero1=0;           //variable para los numeros enteros que se elijan
    int numero2=0;           //variable para los numeros enteros que se elijan
    float numero1div=0.0;    //idem anterior solo que para la division uso del tipo float
    float numero2div=0.0;
    char caracter;           //variable para el caracter que pido entre medio de los dos numeros
    char confirmacion;       //variable para almacenar la confirmacion de salida

    while (opcion_elegida!=5)             //mientras la opcion elegida sea distinto de 5 imprime el menu, arranca en 0 por eso al menos 1 vez se muestra
{
    printf("Menu de operaciones\n");      //menu
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");
    printf("5.Salir\n");

    printf("\nelija su opcion \n");        //se elije una opcion y se guarda en opcion_elegida
    scanf("%d",&opcion_elegida);

    switch (opcion_elegida)                //segun se haya tocado, pasan los casos
{

    case 1:
        pedir_2_enteros();  //se piden 2 enteros
        scanf("%d%c%d",&numero1,&caracter,&numero2); //se leen los enteros con el caracter en el medio
      //  leer_2_enteros();    //esto quiero llevarlo a funcion pero se me complica
    //    verif_numero_valido();  //quiero verificar que sea un numero y no cualquier cosa
        resultado=sumar_2_enteros(numero1,numero2); //paso una copia de los numeros a la funcion que suma y me devuelve el resultado en resultado
        mostrar_resultado(resultado);   //se imprime el resultado
        tecla_para_continuar();         //se espera una tecla para continuar
        borrar_pantalla();                //se borra la pantalla
        break;                          //para que no continue al case 2:

    case 2:  //pasa lo mismo que case1, solo que con la resta
        pedir_2_enteros();
        scanf("%d%c%d",&numero1,&caracter,&numero2);
      //  leer_2_enteros();
    //    verif_numero_valido();
        resultado=sumar_2_enteros(numero1,-numero2); //sumo la resta al agregarle el menos a numero2, como mandarle a cambiar el signo a la suma
        mostrar_resultado(resultado);
        tecla_para_continuar();
        borrar_pantalla();
        break;

    case 3: //caso multiplicacion
        pedir_2_enteros();
        scanf("%d%c%d",&numero1,&caracter,&numero2);
      //  leer_2_enteros();
    //    verif_numero_valido();
        resultado=multiplic_2_enteros(numero1,numero2); //mando una copia de los valores elegidos y devuelve el resultado
        mostrar_resultado(resultado);
        tecla_para_continuar();
        borrar_pantalla();
        break;

    case 4: //caso division
        pedir_2_enteros();
        scanf("%f%c%f",&numero1div,&caracter,&numero2div); //pido los numeros
        while (numero2div==0.0)
        {
            printf("no es posible dividir por 0, ingrese otro numero\n");  //mientras el numero sea cero pide otro
            scanf("%f",&numero2div);
        }
      //  leer_2_enteros();
    //    verif_numero_valido();
        resultadodiv =divi_2_enteros(numero1div,numero2div); //efectuo la division
        printf("el resultado es: %.1f \n", resultadodiv);  //muestro solo 1 numero despues de la coma
        tecla_para_continuar();
        borrar_pantalla();
        break;

     case 5: //caso salir
        printf("seguro que queres salir? (s/n) \n");
        scanf("%c",&confirmacion);
        scanf("%c",&confirmacion);   //no estoy seguro por que pero creo que queda algo en la consola por eso tengo que poner 2
        if (confirmacion=='s' || confirmacion=='S') //si seguro quiere salir, retorno 0, termina el programa
        {
            return 0;
        }
        else
        {
            printf("entonces volvamos al menu\n"); //sino tocaste s es que no estas seguro entonces volvemos
            opcion_elegida=80;   //cambio opcion_elegida a 80 porque el while se va a repetir si es distinto de 5, sino al evaluar terminaria
            tecla_para_continuar();
            borrar_pantalla();
        }
        break;

     default:
        printf("\nEsa opcion no es valida\n");
        printf("Debe ingresar una opcion del 1 al 5 \n");
        tecla_para_continuar();
        borrar_pantalla();
} //fin del switch

} //fin del while


    return 0; //esta demas es imposible que el programa llegue aca
}
