#include "declaraciones.h"

int main()
{
    int validador=50;           //inicia en 50 para asegurarse que deba cambiar su valor para continuar
    int se_toco=0;              //la opcion que se toca arranca en 0
    imprimir_menu();            //llamada a la funcion imprimir menu
    scanf("%d",&se_toco);       //lee el valor que se toco
    validador=verificador_opcion(&se_toco); //le mando lo que se toco por parametro al verificador y se devuelve en validador

while (validador==0) //si la opcion fue incorrecta se le aviso en la funcion
        {
           scanf("%d",&se_toco); //leo lo nuevo ingresado
           validador=verificador_opcion(&se_toco); //testeo si la opcion ingresada entra en lo que quiero
        }           //esto se repite hasta que se ingrese un valor deseado

    switch (se_toco)
    {
        float radio=0.0;  //declaracion y definicion de variables
        float resultado=0.0;
case 1:
    Color(YELLOW, BLUE);
    printf("ingrese el radio de la circunferencia\n");
    Color(BLACK, WHITE);
    scanf("%f[0-9.]",&radio);
    resultado=radio*2*PI;
    printf("el perimetro de la circunferencia es %.3f unidades", resultado);
    break;
case 2:
    Color(YELLOW, BLUE);
    printf("ingrese el radio de la circunferencia\n");
    Color(BLACK, WHITE);
    scanf("%f[0-9.]",&radio);
    resultado=radio*radio*PI;
    printf("el area del circulo es %.3f unidades cuadradas", resultado);
    break;
case 3:
    Color(YELLOW, BLUE);
    printf("ingrese el radio de la circunferencia\n");
    Color(BLACK, WHITE);
    scanf("%f[0-9.]",&radio);
    resultado=radio*radio*radio*PI*(4.0/3);
    printf("el volumen de la esfera es %.3f unidades cubicas", resultado);
    break;
    }
    return 0;
}
