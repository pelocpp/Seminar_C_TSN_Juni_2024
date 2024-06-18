#include <stdio.h>    // printf

// A) Unterprogramm // Procedure

// B) Funktion // Function

// Schnittstelle // Funktionsprototyp
void sayHello(int wieOft);
void variablen_und_adressen();

void sayHello(int wieOft)
{
    for (int i = 0; i < wieOft; i++) {

        printf("Hello\n");

        if (i == 2) {
            return;
        }
    }

    printf("Bin hier\n");
    return;
}

// ===========================================

// Funktion
int malZwei(int wert)
{
    int result;

    result = 2 * wert;

    return result;
}

void test_unterprogramme_01()
{
    int anzahl = 5;

    sayHello(anzahl);  // Unterprogramm-Auruf

    int ergebnis = malZwei(10);

    printf("Hello\n");
}

// ==============================================

void malDrei(int wert)
{
    wert = wert * 3;
}

void malDreiEx(int* wert)
{
    int tmp = *wert;

    tmp = tmp * 3;

    *wert = tmp;

    // wert = wert * 3;
}

void test_unterprogramme_02()
{
    int x = 10;
    printf("x = %d\n", x);

    malDrei(x);

    printf("x = %d\n", x);

    malDreiEx(&x);
}

// ========================================


void variablen_und_adressen()
{
    int n = 123;

    int* adresse_n;

    adresse_n = &n;  // Adress-Operator
                     // Gib mir die Adresse von ...

    *adresse_n = 99;
}

// =======================================

// Übung

void tausche(int a, int b)
{
    int z;

    z = a;
    a = b;
    b = z;
}

void tauscheEx(int* a, int* b)
{
    int z;

    z = *a;
    *a = *b;
    *b = z;
}


void test_unterprogramme()
{
    int x = 10;
    int y = 11;

    printf("x=%d - y=%d\n", x, y);

    tauscheEx (&x, &y);

    printf("x=%d - y=%d\n", x, y);
}

