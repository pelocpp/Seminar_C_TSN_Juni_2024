#include <stdio.h>

int n = 123;  // Globale Variable

int g_MaximaleTemperatur = 123;  // Globale Variable


// Unterprogramme
void test_01()
{
    // n = 123;  Python

    int n = 123;

    int m = 456;
    int x = n + m;

    // Punkt-vor-Strich
    int y = 1 + 2 * 3;

    printf("Wert von y: %d\n", y);

    float f = 123.456F;

    double d = 654.321;

    size_t wievieleBytes = sizeof(int);
    printf("sizeof(int): %zu\n", wievieleBytes);

    wievieleBytes = sizeof(long);
    printf("sizeof(long): %zu\n", wievieleBytes);

    wievieleBytes = sizeof(long long);
    printf("sizeof(long long): %zu\n", wievieleBytes);

    wievieleBytes = sizeof(int);
    printf("sizeof(int): %zu\n", wievieleBytes);

    wievieleBytes = sizeof(size_t);
    printf("sizeof(size_t): %zu\n", wievieleBytes);

    wievieleBytes = sizeof(float);
    printf("sizeof(float): %zu\n", wievieleBytes);

    wievieleBytes = sizeof(double);
    printf("sizeof(double): %zu\n", wievieleBytes);
}

void test_02()
{
    // if-Anweisung

    int a = 2;
    int b = 1;

    int c = 4;
    int d = 3;

    //if (a > b) :
    //    // tue was
    //    // tue was

    if (a > b) {
        printf("Bin hier\n");
    }

    // UND / and
    if (a > b && c > d) {
        printf("Bin wieder hier\n");
    }

    // ODER / or
    if (a > b || c > d) {
        printf("Bin wieder hier\n");
    }

    // NEULAND
    if (a) {
        printf("Bin auch wieder hier\n");
    }

    //if (a > b) :
    //    // tue was
    //    // tue was
    //else :
    //    // tue was
    //    // tue was

    // ABSCHIEßende FRAGE:
    if (a == 0) {
        printf("hier 0.");
    }
    else if (a == 1) {
        printf("hier 1.");
    }
    else if (a == 2) {
        printf("hier 2.");
    }

    // VERSUS
    if (a == 0) {
        printf("hier 0.");
    }
    if (a == 1) {
        printf("hier 1.");
    }
    if (a == 2) {
        printf("hier 2.");
    }
}


void test_03()
{
    int a = 5;

    int maximaleTemperatur = 27;

    //while (a > 0) :
    //    // ff
    //    //  sdfsdfsdf

    //while (a > 0) {

    //    printf("a hat den Wert %d\n", a);

    //    a = a - 1;
    //}

    //while (a > 0) {

    //    printf("a hat den Wert %d\n", a);

    //    a -= 1;  // a = a - 1;
    //}

    while (a > 0) {

        printf("a hat den Wert %d\n", a);

        a --;  // a = a - 1;
    }

}

void test_04()
{
    int a = 5;

    int n = 0;

    n = n + 1;

    //for _ in range(5) :
    //    // asdasdasd
    //    // adasdasd

    for ( int i = 0 ; i < 5 ; i ++ ) {

        printf("i hat den Wert %d\n", i);
    }

    //int i = 0;

    //for ( ; i < 5; ) {

    //    printf("i hat den Wert %d\n", i);

    //    i++;
    //}

}

void test_05()
{
    int a = 5;

    while (a > 0) {

        // a = 3: Hmm, den Wert habe ich nicht erwartet

        //if (a == 3) {
        //    break;
        //}

        if (a == 3) {
            // printf("Bin hier\n");
            a--;
            continue;
        }

        printf("a hat den Wert %d\n", a);

        a--;
    }

    printf("Ende\n");
}

void test_06()
{
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            // habe den Wert K == 2 NICHT erwartet
            if (k == 2) {
                goto ende;
            }

            printf("i= %d, k = %d\n", i, k);
        }
    }

    ende:  // label
    printf("Ende\n");
}

void test_07()
{
    int n;

    printf("Bitte Wert eingeben: ");

    scanf_s("%d", &n);

    printf("n = %d\n", n);
}

void main()
{
    test_07();
}
