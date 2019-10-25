#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    a = 40;
    b = 10;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
    printf("Hasil dari %d + %d = %d.", a, b, c);
    printf("Hasil dari %d - %d = %d.", a, b, d);
    printf("Hasil dari %d * %d = %d.", a, b, e);
    printf("Hasil dari %d / %d = %d.", a, b, f);
    printf("Hasil dari %d % %d = %d.", a, b, g);
    return 0;
}
