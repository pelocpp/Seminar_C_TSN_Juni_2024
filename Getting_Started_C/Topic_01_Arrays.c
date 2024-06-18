#include <stdio.h>    // printf
#include <stdlib.h>   // rand
#include <time.h>     // rand

#define   Max   100

void test_arrays_01()
{
    // 5 Zahlen im Speicher

    int numbers [5];

    // schreibender Zugriff
    numbers[0] = 123;
    // ...
    numbers[4] = 999;

    // lesender Zugriff
    int wert = numbers[0];
}

void test_arrays_02()
{
    // 5 Zahlen im Speicher

    int numbers1[5] = { 1, 2, 3, 4, 5 };

    int numbers2[] = { 1, 2, 3, 4, 5 };

    int numbers3[5] = { 1, 2, 3 };

    int numbers4[5] = { 1 };

    int numbers5[5] = { 0 };
}

void test_arrays()
{
   // int Max = 200;

    // 5 Zahlen im Speicher

    int numbers[Max] = { 0 };

    for (int i = 0; i < Max; i++) {

        numbers[i] = i;
    }

    for (int i = 0; i < Max; i++) {

        printf("%d - %d\n", i, numbers[i]);
    }
}

// ================================================

void test_arrays_03()
{
    // WARNUNG
    srand((unsigned int) time(NULL));

    // srand(100);  // seed 

    int zufall = rand();
    int zufall2 = rand();
}

void test_arrays_04()
{
    //wert1 = 100;

    //wert2 = 123.456;

    //wert1 = wert2;

    int wert1 = 100;

    double wert2 = 123.777;

    // to cast
    wert1 = (int) wert2;

    wert1 = (int) 123.777;
}

