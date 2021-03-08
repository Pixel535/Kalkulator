#include <stdio.h>
#include <stdlib.h>
#include "dzialania.h"

double num1;
double num2;
double num3;
int komenda;
int dzialania_funkcja()
{

    switch(komenda)
    {
    case 1:
        {
            printf("%.2f", num1 + num2 + num3);
            break;
        }

    case 2:
        {
            printf("%.2f", num1 - num2 - num3);
            break;
        }

    case 3:
        {
            printf("%.2f", num1 * num2 * num3);
            break;
        }

    case 4:
        {
            if((num2 == 0))
            {
                printf("nie mozna dzielic przez zero");
            }
            else if((num3 == 0))
            {
                printf("nie mozna dzielic przez zero");
            }
            else
            {
                printf("%lf",(num1)/(num2)/(num3));
            }
            break;
        }

    default:
    printf("zly znak");
    }
    return 0;
}

