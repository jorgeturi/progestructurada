#include "DeclaraFunciones+librerias.h"

void tecla_para_continuar()
{
    char c;
    printf("presione enter para continuar\n");
    scanf("%c",&c);
    scanf("%c",&c);
}

void pedir_2_enteros()
{
    printf("ingrese 2 enteros separados por una coma\n");
}

void leer_2_enteros()       //esta funcion se usa
{
    char caracter;
    int entero1;
    int entero2;
    scanf("%d&c&d",&entero1,&caracter,&entero2);
}

void verif_num_valido()  //quiero verificar pero no se como
{

}

int sumar_2_enteros(int entero1,int entero2)  //funcion que suma dos enteros por valor y retorna el resultado
{
    int resultado_suma=0;
    resultado_suma=entero1+entero2;
    return resultado_suma;
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

void mostrar_resultado(int resultado)
{
    printf("el resultado es: %d \n",resultado);
}

int multiplic_2_enteros(int entero1,int entero2) //multiplicacion de dos enteros por valor, retorna resultado
{
    int resultado_multiplic=0;
    resultado_multiplic=entero1*entero2;
}

float divi_2_enteros(float entero1,float entero2)
{
    float resultado_divi=0.0;
    resultado_divi=entero1/entero2;
    return resultado_divi;
}
