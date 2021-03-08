#include <stdio.h>
#include <stdlib.h>
#include "wejscie.h"



int wejscie_funkcja()
{

    printf("Numer 1:");
    scanf("%lf", &num1);
    printf("Numer 2:");
    scanf("%lf", &num2);
    printf("Numer 3:");
    scanf("%lf", &num3);
    printf("1) +\n2) -\n3) *\n4) /\nPodaj numer znaku: ");
    scanf("%d", &komenda);

    return 0;
}


