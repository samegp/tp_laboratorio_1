#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float operadorA;
    float operadorB;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    int menu;
    int flagSaludo;

    flagSaludo = 0;

    if(flagSaludo == 0){
            printf("Hola, bienvenido!\n");
        flagSaludo = 1;
        }
    do{

        printf("\nPor favor elija una opcion: \n");
        printf("1.-Ingresar primer operando: \n");
        printf("2.-Ingresar segundo operando: \n");
        printf("3.-Calcular todas las operaciones:\n4.-Informar resultados\n5.-Salir\n");
        scanf("%d", &menu);
        system("cls");

        switch(menu){

        case 1:
            printf("por favor ingrese el primer operando: \n");
            scanf("%f", &operadorA);
            system("cls");
            break;
        case 2:
            printf("por favor ingrese el segundo operando: \n");
            scanf("%f",&operadorB);
            system("cls");
            break;
        case 3:
            printf("A continuacion se calculara:\na.-Suma de los operandos\nb.-Resta de los operandos\nc.-Division de los operandos\nd.-Multiplicacion de los operandos\n\n");
            resultadoSuma = SumarNumeros(operadorA, operadorB);
            resultadoResta = RestarNumeros(operadorA, operadorB);
            resultadoDivision = DivisionNumeros(operadorA, operadorB);
            resultadoMultiplicacion = MultiplicacionNumeros(operadorA, operadorB);
            printf("Si desea conocer los resultados de las operaciones mencionadas anteriormente, marque la opcion 4\n\n");
            break;
        case 4:
            printf("El resultado de la suma es: %.2f",resultadoSuma);
            printf("\nEl resultado de la resta es: %.2f",resultadoResta);
            if(operadorA<1){
                    printf("\nDisculpe, no se puede realizar la division ya que el dividendo es cero");
            }else{
                printf("\nEl resultado de la division es: %2.f",resultadoDivision);
            }
            printf("\nEl resultado de la multiplicacion es: %2.f",resultadoMultiplicacion);
            printf("\n");
            break;
        case 5:
            printf("Muchas gracias por usar esta calculadora!!\n");
            break;

        }

    }
    while(menu>=1 && menu<=4);
    if(menu==5){
            printf("Nos vemos...!!!");
    }else{
        printf("Ha ingresado una opcion invalida\nel programa se cerrara...\n\nAdios!\n");
        }

    return 0;
}
