// ================================================================
// Projekt_Lotto_Musterloesung.h
// ================================================================

#pragma once

// ================================================================
// globale Konstanten

#define MaxKugel   6

// ================================================================
// globale Datentypen

// Strukturtyp
struct Lotto
{
    int kugeln[6];
    int anzahlKugeln;
};

// ================================================================

// globale Variablen

// globale Variable für eine Ziehung
struct Lotto ziehung = { { 0 }, 0 };

// Wert zum Reproduzieren:         1651144609
unsigned int g_reproduktionsWert = 1651144609;

// ================================================================

//  Vorwaertsdeklarationen
int naechsteZahl();
int zahlSchonVorhanden(int zahl);
void zahlEinfuegen(int zahl);
void lottoInitialisierung();
void lottoSpielen();
void lottoAusgabe();
void exercise_lotto_spielen_strukturiert();


// ================================================================
// End-of-File
// =================

