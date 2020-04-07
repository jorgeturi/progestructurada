#include "declaraciones.h"

void imprimir_menu()   //funcion que imprime el menu
{
    Color(BLACK, WHITE);  //pone el color de la consola (fondo,texto)
    printf("menu\n");
    printf("1. Calcular perimetro de circunferencia\n");
    printf("2. Calcular area del circulo\n");
    printf("3. Calcular volumen de la esfera\n");
}

int verificador_opcion(int*se_toco)  //funcion que verifica que lo que se toco
{
    int validador=50;
    if (*se_toco <1 || *se_toco>3)  //este dentro de estos rangos
    {
        Color(WHITE, RED);
        printf("esa opcion no es valida, ingrese nuevamente\n");
        Color(BLACK, WHITE);
        validador=0;                //si no es valido, devuelvo un 0 para volver a ingresar
    }
    else
    {
       validador=1;                 //al ser valido le mando un 1 para continuar
    }
    return validador;                         //se vuelve
}



void Color(int Background, int Text){ // Función para cambiar el color del fondo y/o pantalla
HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE); // Tomamos la consola.

   //  Para cambiar el color, se utilizan números desde el 0 hasta el 255.
   // Pero, para convertir los colores a un valor adecuado, se realiza el siguiente cálculo.
 int    New_Color= Text + (Background * 16);

SetConsoleTextAttribute(Console, New_Color); // Guardamos los cambios en la Consola.

}
