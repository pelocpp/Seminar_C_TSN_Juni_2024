#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0


// Strukturtyp
struct Lotto
{
    int zahlen[6];

    int anzahlKugeln;
};

// globale Variable für eine Ziehung
struct Lotto ziehung = { { 0 }, 0 };


void testDoppelteLottozahlen()
{
    int kugel;

    srand(1651144609);

    kugel = rand();   // 0 bis 32767
    kugel = kugel % 49;    // 0 .. bis einschl. 48
    kugel = kugel + 1;     // 1 .. bis einschl. 49
   // kugel = (rand() % 49) + 1 ;
    printf("Kugel: %d\n", kugel);

    kugel = rand();
    kugel = kugel % 49; 
    kugel = kugel + 1;
    printf("Kugel: %d\n", kugel);

    kugel = rand();
    kugel = kugel % 49;
    kugel = kugel + 1;
    printf("Kugel: %d\n", kugel);

    kugel = rand();
    kugel = kugel % 49;
    kugel = kugel + 1;
    printf("Kugel: %d\n", kugel);

    kugel = rand();
    kugel = kugel % 49;
    kugel = kugel + 1;
    printf("Kugel: %d\n", kugel);

    kugel = rand();
    kugel = kugel % 49;
    kugel = kugel + 1;
    printf("Kugel: %d\n", kugel);
}


void ziehungDerLottozahlen()
{
    testDoppelteLottozahlen();
}
