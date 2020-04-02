#include <stdio.h>
#include <stdlib.h>
int sumanteros (int,int);
int restanteros (int,int);
int multiteros (int,int);
float diviteros (float,float);


int main()
{

    int opcionelegida=0;
    char c=0;
    int num1=0;
    int num2=0;
    int resulsuma=0;
    int resulresta=0;
    int resulmulti=0;
    float resuldivi=0;
    char verifisalida;

    while (opcionelegida!=5){
    printf("Menu de operaciones\n");
    printf("\t1.Suma\n");
    printf("\t2.Resta\n");
    printf("\t3.Multiplicacion\n");
    printf("\t4.Division\n");
    printf("\t5.Salir\n");
    scanf("%d", &opcionelegida);

    while (opcionelegida>5 || opcionelegida<0)
    {
        printf("Debe ingresar una opcion valida (1,2,3,4 o 5)\n");
        scanf("%d", &opcionelegida);

    }
    switch (opcionelegida)
    {
      case 1:
    printf("ingrese 2 numeros enteros separados por una coma\n");
    scanf("%d%c%d",&num1,&c,&num2);
    resulsuma = sumanteros(num1,num2);
    printf ("el resultado es:%d\n",resulsuma);
    break;

    case 2:
    printf("ingrese 2 numeros enteros separados por una coma\n");
    scanf("%d%c%d",&num1,&c,&num2);
    resulresta = restanteros(num1,num2);
    printf ("el resultado es:%d\n",resulresta);
    break;

    case 3:
    printf("ingrese 2 numeros enteros separados por una coma\n");
    scanf("%d%c%d",&num1,&c,&num2);
    resulmulti = multiteros(num1,num2);
    printf ("el resultado es:%d\n",resulmulti);
    break;

    case 4:
    printf("ingrese 2 numeros enteros separados por una coma\n");
    scanf("%f%c%f",&num1,&c,&num2);
    while (num2==0)
    {
        printf("el segundo numero no puede ser 0, no existe tal division. Ingrese otro \n");
        scanf("&f",&num2);
    }
    resuldivi = diviteros(num1,num2);
    printf ("el resultado es:%f\n\n",resuldivi);
    break;

    case 5:
        printf("seguro que queres salir? (s/n)");
        scanf("%c",&verifisalida);
        if ((verifisalida==0) || (verifisalida==1) || (verifisalida==1) || (verifisalida==0))
        {
           printf("aa");

        }
        break;

    }
    }

    return 0;
}


