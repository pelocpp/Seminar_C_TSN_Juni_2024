#pragma once

// ===============================
// constants

#define MaxHour 24

// ===============================
// data types

struct Time
{
    int hours;      // member
    int minutes;
    int seconds;
};

// ===============================
// function prototypes  // Schnittstellen von Funktionen

extern void printTime(struct Time t);
extern void resetTime(struct Time* t);
extern void incrementTime(struct Time* t);
