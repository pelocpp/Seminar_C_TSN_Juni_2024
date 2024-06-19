#include <stdio.h> 

#include "Time.h"

#include "Beispiele.h"

void printTime(struct Time t)
{
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

//void resetTime(struct Time t)
//{
//    t.hours = 0;
//    t.minutes = 0;
//    t.seconds = 0;
//}

void resetTime(struct Time* t)
{
    t -> hours = 0;
    t -> minutes = 0;
    t -> seconds = 0;

    //(*t).hours = 0;
    //(*t).minutes = 0;
    //(*t). seconds = 0;
}

void incrementTime(struct Time* t)
{
    t->seconds++;

    if (t->seconds == 60) {

        t->seconds = 0;
        t->minutes++;

        if (t->minutes == 60) {

            t->minutes = 0;
            t->hours ++;

            if (t->hours == 24) {

                t->hours = 0;
            }
        }
    }
}

void strukturen()
{
    struct Time jetzt;

    jetzt.hours = 8;
    jetzt.minutes = 16;
    jetzt.seconds = 30;

    printTime(jetzt);

    struct Time dann = { 10, 30, 0 };
    printTime(dann);

    resetTime(&dann);
    printTime(dann);

    incrementTime(&dann);
    printTime(dann);
}
