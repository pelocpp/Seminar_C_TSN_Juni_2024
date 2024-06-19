#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void dynamic_01()
{
    // int n;  // am Stack

    int numBytes = sizeof(int);

    int* pi = malloc(numBytes);   // dynamisch

    if (pi == NULL) {
        printf("Kein Speicher mehr");
        return;
    }

    *pi = 123;

    free(pi);
}

void tueWasMitdemSpeicher(int* ptr)
{
    int n;

    n = 1;     // direkter Zugriff

    *ptr = 2;  // indirekter Zugriff

    free(ptr);
}

void dynamic_02()
{
    int numBytes = sizeof(int);

    int* pi = malloc(numBytes);  // 4

    tueWasMitdemSpeicher(pi);

    getchar();

    *pi = 3;   // Kann gehen, ist aber FALSCH !!!
}

void dynamic_03()
{
    // int numbers[10];

    int anzahlPlaetze = 0;
    scanf_s("%d", &anzahlPlaetze);

 //   int numbersZwei[anzahlPlaetze];

    int* start = malloc(anzahlPlaetze * sizeof(int));  // 40

    // Speicher vorbelegen
    for (int i = 0; i < anzahlPlaetze; i++)
    {
        start[i] = 2 * i;
    }

    free(start);
}

void dynamic()
{
    dynamic_03();
}
