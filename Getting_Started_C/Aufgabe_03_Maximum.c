// =====================================================================================
// ArraySumMinMax.c
// =====================================================================================

#include <stdio.h>
#include <stdlib.h>    // rand()
#include <time.h>      // time_t

#define Length  10

static void exercise_array_maximum()
{
    printf("Maximum\n");
    printf("=======\n");

    int feld[Length] = { 0 };

    time_t t;
    srand((unsigned)time(&t)); // s = seed // beeinflusst rand()

    // Feld vorbelegen mit Zahlen im Bereich von 1 .. 100
    for (int i = 0; i < 10; i++) {

                                 // rand:    0 .. 32767
        int rest = rand() % 100; // 0 .. 99
        rest = rest + 1;         // 1 .. 100
        feld[i] = rest;          // 1 .. 100 
    }

    // Groesstes Element suchen

    int max = feld[0];

    for (int i = 1; i < Length; i++)
    {
        if (feld[i] > max) {
            max = feld[i];
        }
    }

    // Feld ausgeben
    for (int i = 0; i < 10; i++) {
        printf("%2d\n", feld[i]);
    }

    // Maximum ausgeben
    printf("\n");
    printf("Maximum: %d\n\n", max);
}

void exercise_array_minimum_maximum()
{
    exercise_array_maximum();
}

// =====================================================================================
// End-of-File
// =====================================================================================