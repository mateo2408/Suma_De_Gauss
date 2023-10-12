/*Construir un programa en lenguaje C que calcule la suma de Gauss a 
partir de un número entero ingresado por el usuario.*/
//Mateo Cisneros
#include<stdio.h>
main()
{
    int num;
    int sum = 0;
    int i;

    printf("Ingrese el numero que se desea sumar -> ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num = 1)
        {
            printf("El resultado de sumar %d es: %d", num, num);
        }
        else
        {
            for ( i = 1; i <= num; i++)
            {
                sum += i;
            }   
        }
    }
    else
    {
        printf("Asegurese que el numero ingresado sea entero y positivo");
    }
    
    
    
    return 0;
}
