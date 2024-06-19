// ================================================================
// Projekt_Lotto_Musterloesung.c
// ================================================================

#include <stdio.h>
#include <stdlib.h>   // rand()
#include <time.h>     // time_t

#include "Projekt_Lotto_Musterloesung.h"  

// ================================================================

// Realisierung
static void lottoInitialisierung()
{
    time_t t = 0;

    srand((unsigned)time(&t));
    //srand(g_reproduktionsWert);  // Mit diesem Wert lassen sich DOPPELTE reproduzieren ...

    ziehung.anzahlKugeln = 0;   

    for (int i = 0; i < MaxKugel; ++i)
    {
        ziehung.kugeln[i] = 0;
    }
}

static int naechsteZahl()
{
    int zahl = rand() % 49 + 1;
    return zahl;
}

static int zahlSchonVorhanden(int zahl)
{
    for (int i = 0; i < ziehung.anzahlKugeln; ++i)
    {
        if (ziehung.kugeln[i] == zahl)
        {
            return 1; // true
        }
    }

    return 0;   // false
}

static void zahlEinfuegen(int zahl)
{
    ziehung.kugeln[ziehung.anzahlKugeln] = zahl;
    ziehung.anzahlKugeln++;
}

static void lottoSpielen()
{
    for (int i = 0; i < MaxKugel; ++i)
    {
        int zahl = naechsteZahl();

        while (zahlSchonVorhanden(zahl))
        {
            zahl = naechsteZahl();
        }

        printf("%d. Kugel: %d\n", (i + 1), zahl);
        zahlEinfuegen(zahl);
    }
}

static void lottoAusgabe()
{
    printf("Ziehung der Lottozahlen:\n");
    printf("========================\n");

    for (int i = 0; i < MaxKugel; ++i)
    {
        printf("%d ", ziehung.kugeln[i]);
    }
    printf("\n");
}

static void exercise_lotto_spielen_strukturiert()
{
    lottoInitialisierung();   // Eingabe
    lottoAusgabe();           // Ausgabe
    printf("\n");

    lottoSpielen();           // Verarbeitung
    lottoAusgabe();           // Ausgabe
    printf("\n");
}

// ================================================================

void ziehungDerLottozahlen_Loesung()
{
    exercise_lotto_spielen_strukturiert();
}

// ================================================================
// End-of-File
// ================================================================