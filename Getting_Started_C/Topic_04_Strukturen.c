#include <stdio.h> 

struct Time
{
    int hours;      // member
    int minutes;
    int seconds;
};

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
}
