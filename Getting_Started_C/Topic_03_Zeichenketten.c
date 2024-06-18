#include <stdio.h> 

void zeichenketten_01()
{
    char ch = 'A';

    printf("%c\n", ch);

    // Gemeinsamkeit: int und char

    int n = ch;

    printf("%d\n", n);

    ch = 200;

    printf("%c\n", ch);
}

void zeichenketten__()
{
    char ch = '\0';
    printf("%c - %d\n", ch, ch);

    return;

    ch = 'A';
    printf("%c", ch);

    ch = 13;
    printf("%c", ch);

    ch = 'B';
    printf("%c", ch);

    ch = 10;
    printf("%c", ch);

    ch = 'C';
    printf("%c", ch);
}

void zeichenketten_03()
{
    for (int i = 0; i < 128; i++)
    {
        char ch = i;

        // printf("Char: %c - ASCII Code: %d\n", ch, i);

        printf("Char: %c - ASCII Code: %X\n", i, i);
    }
}

// ===================================================

void zeichenketten_04()
{
    // Python: zeichenkette = "ABC";

    char zeichenkette[] = "ABC";

    printf("%s", zeichenkette);
}

void zeichenketten_05()
{
    // Python: zeichenkette = "ABC";

    char zeichenkette[] = { 'A', 'B', 'C', 0 };

    printf("%s", zeichenkette);
}

void zeichenketten_06()
{
    // Python: zeichenkette = "ABC";

    // char zeichenkette[] = { 'A', 'B', 'C', 0 };
    char* zeichenkette = "ABC";

    printf("%s", zeichenkette);
}

int string_length( char kette[] )
{
    int i = 0;

    while (kette[i] != 0) {
        i = i + 1;
    }

    return i;
}


void zeichenketten_07()
{
    char zeichenkette[] = "ABC";

    int len = string_length(zeichenkette);
}

void string_to_upper(char kette[])
{
    int index = 0;
    char ch = kette[index];

    while (ch != 0) {

        if (ch >= 97 && ch <= 122) {

            kette[index] = ch - 32;
        }
        
        index++;
    }
}

void zeichenketten()
{
    char zeichenkette[] = "ABC";

    char ch = 'g';

    // A) Wann ist ein Zeichen klein
    // ist ch klein ???
    if (ch >= 97 && ch <= 122) {

        printf("%c ist klein\n", ch);
    }
    else {
        printf("%c ist nicht klein\n", ch);
    }

    // B) Wie komme ich von einem kleinen Zeichen
    // zu einem großen Zeichen

    printf("A) %c\n", ch);
    ch = ch - 32;
    printf("B) %c\n", ch);

    string_to_upper(zeichenkette);
}
