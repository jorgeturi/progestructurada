#include <stdio.h>
#include "operaciones_matrices.h"

void tecla_para_continuar(void);
void borrar_pantalla(void);
void transponer_matriz(float [3][3],float [3][3],int, int);
void ingresar_valores(float[3][3], int, int);
void imprimir_matriz(const float [3][3], int , int );


int main()
{
    int vason=0;
    float resultado = 0;
    char opcion_elegida=1; //variable para las opciones del menu
    char confirmacion;       //variable para almacenar la confirmacion de salida

    int N_FILAS=3;
    int N_COLUMNAS=3;
    float matriz[3][3]={0};
    float matriz_transpuesta[3][3]={0};
    while (opcion_elegida!=0)             //mientras la opcion elegida sea distinto de 0 imprime el menu, arranca en 1 por eso al menos 1 vez se muestra
{
    printf("\t\tMenu de operaciones\n");      //menu
    printf("\t1%cIngresar matriz\n",177);
    printf("\t2%cImprimir matriz\n",177);
    printf("\t3%cTransponer matriz\n",177);
    printf("\t4%cCalcular matriz adjunta\n",177);
    printf("\t5%cCalcular determinante\n",177);
    printf("\t6%cCalcular inversa, si existe\n",177);
    printf("\t0%cSalir\n",177);

    printf("\nelija su opcion \n");        //se elije una opcion y se guarda en opcion_elegida
    fflush(stdin);
    scanf("%c",&opcion_elegida);


    switch (opcion_elegida)                //segun se haya tocado, pasan los casos
{

    case '1':

        ingresar_valores(matriz,N_FILAS,N_COLUMNAS);
        tecla_para_continuar();         //se espera una tecla para continuar
        borrar_pantalla();                //se borra la pantalla
        break;                          //para que no continue al case 2:

    case '2':  //caso imprimir matriz
        imprimir_matriz(matriz,N_FILAS,N_COLUMNAS);
        tecla_para_continuar();
        borrar_pantalla();
        break;

    case '3': //caso transponer matriz
        //transponer_matriz(matriz,N_FILAS,N_COLUMNAS);

        transponer_matriz(matriz,matriz_transpuesta,3,3);
        imprimir_matriz(matriz_transpuesta,3,3);
        tecla_para_continuar();
        borrar_pantalla();
        break;

    case '4': //caso adjunta
        calcular_adjunta(matriz,matriz);
        tecla_para_continuar();
        borrar_pantalla();
        break;

    case '5': //caso determinante
        resultado=calcular_determinante(matriz);
        printf("el determinante es %.2f \n",resultado);
        tecla_para_continuar();
        borrar_pantalla();
        break;

    case '6': //calcular inversa
        //me tiene que funcionar el bloque de formar la transpuesta primero
        printf("el programa por el momento no calcula inversa\n");
        tecla_para_continuar();
        borrar_pantalla();
        break;

     case '0': //caso salir
        fflush(stdin);
        printf("seguro que queres salir? (s/n) \n");
        scanf("%c",&confirmacion);   //no estoy seguro por que pero creo que queda algo en la consola por eso tengo que poner 2
        if (confirmacion=='s' || confirmacion=='S') //si seguro quiere salir, retorno 0, termina el programa
        {
            opcion_elegida=0;
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
        fflush(stdin);
        printf("\nEsa opcion no es valida\n");
        printf("Debe ingresar una opcion del 1 al 6 o 0 \n");
        tecla_para_continuar();
        borrar_pantalla();

} //fin del switch

} //fin del while


    return 0;
}


void transponer_matriz(float matriz[3][3],float matriz_transpuesta[3][3],int N_FILAS, int N_COLUMNAS)
{
    for(int f=0; f<N_COLUMNAS; f++)
        {
            printf("\t\t");
            for(int c=0; c<N_FILAS; c++)
            {
                printf("   ");
                printf("%.2f",matriz[c][f]);
            }
            printf("\n");
        }

        for(int f=0; f<N_COLUMNAS; f++)
        {
            printf("\t\t");
            for(int c=0; c<N_FILAS; c++)
            {
                printf("   ");
                matriz_transpuesta[f][c] = matriz[c][f];
            }
            printf("\n");
        }

}


void imprimir_matriz(const float matriz[3][3], int N_FILAS, int N_COLUMNAS)
{
        for(int f=0; f<N_FILAS; f++)
        {
            printf("\t\t");
            for(int c=0; c<N_COLUMNAS; c++)
            {
                printf("   ");
                printf("%.2f",matriz[f][c]);
            }
            printf("\n");
        }
}


void tecla_para_continuar()
{
    char c;
    fflush(stdin);
    printf("presione enter para continuar\n");
    scanf("%c",&c);
    fflush(stdin);

}

void borrar_pantalla()   //pongo 50 espacios para "borrar" la pantalla
{
    int i=0;
    while (i<50)
    {
        i=i+1;
        printf("\n");
    }
}


void ingresar_valores(float matriz[3][3], int N_FILAS, int N_COLUMNAS)
{
        for(int f=0; f<N_FILAS; f++)
        {
            printf("\t\tFila número %d:\n",f+1);
            for(int c=0; c<N_COLUMNAS; c++)
            {
                printf("\t\t\tColumna %d ([%d][%d]) = ",c+1 , f+1, c+1);
                scanf("%f",&matriz[f][c]);
            }
            printf("\n");
        }
}
