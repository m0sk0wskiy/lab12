#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    char* pc, c = 'A';
    int* pi, i = 5;
    double* pd, d = 3.14;
    pc = &c;
    pi = &i;
    pd = &d;
    printf("Ðàçìåð óêàçàòåëÿ char: %zu áàéò\n", sizeof(pc));
    printf("Ðàçìåð óêàçàòåëÿ int: %zu áàéò\n", sizeof(pi));
    printf("Ðàçìåð óêàçàòåëÿ double: %zu áàéò\n", sizeof(pd));
    return 0;
}
