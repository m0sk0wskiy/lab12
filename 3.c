#include <stdio.h>
#include <locale.h>
#include <stddef.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    // Òèï int
    int a[3] = { 5, 10, 15 };
    int* pa = &a[1];
    printf("Òèï int:\n");
    printf("Àäðåñ: %p, çíà÷åíèå: %d\n", (void*)pa, *pa);
    pa++;
    printf("Ïîñëå ++: %p, çíà÷åíèå: %d\n", (void*)pa, *pa);
    pa--;
    printf("Ïîñëå --: %p, çíà÷åíèå: %d\n\n", (void*)pa, *pa);
    // Òèï double
    double b[3] = { 1.5, 2.5, 3.5 };
    double* pb = &b[1];
    printf("Òèï double:\n");
    printf("Àäðåñ: %p, çíà÷åíèå: %g\n", (void*)pb, *pb);
    pb++;
    printf("Ïîñëå ++: %p, çíà÷åíèå: %g\n", (void*)pb, *pb);
    pb--;
    printf("Ïîñëå --: %p, çíà÷åíèå: %g\n\n", (void*)pb, *pb);
    // Òèï char
    char c[3] = { 'A', 'B', 'C' };
    char* pc = &c[1];
    printf("Òèï char:\n");
    printf("Àäðåñ: %p, çíà÷åíèå: %c\n", (void*)pc, *pc);
    pc++;
    printf("Ïîñëå ++: %p, çíà÷åíèå: %c\n", (void*)pc, *pc);
    pc--;
    printf("Ïîñëå --: %p, çíà÷åíèå: %c\n\n", (void*)pc, *pc);
    // Òèï long double
    long double d[3] = { 1.1L, 2.2L, 3.3L };
    long double* pd = &d[1];
    printf("Òèï long double:\n");
    printf("Àäðåñ: %p, çíà÷åíèå: %Lg\n", (void*)pd, *pd);
    pd++;
    printf("Ïîñëå ++: %p, çíà÷åíèå: %Lg\n", (void*)pd, *pd);
    pd--;
    printf("Ïîñëå --: %p, çíà÷åíèå: %Lg\n\n", (void*)pd, *pd);
    // Òèï unsigned short int
    unsigned short int e[3] = { 10, 20, 30 };
    unsigned short int* pe = &e[1];
    printf("Òèï unsigned short int:\n");
    printf("Àäðåñ: %p, çíà÷åíèå: %hu\n", (void*)pe, *pe);
    pe++;
    printf("Ïîñëå ++: %p, çíà÷åíèå: %hu\n", (void*)pe, *pe);
    pe--;
    printf("Ïîñëå --: %p, çíà÷åíèå: %hu\n\n", (void*)pe, *pe);
    // Òèï _Bool
    _Bool f[3] = { 0, 1, 1 };
    _Bool* pf = &f[1];
    printf("Òèï _Bool:\n");
    printf("Àäðåñ: %p, çíà÷åíèå: %d\n", (void*)pf, *pf);
    pf++;
    printf("Ïîñëå ++: %p, çíà÷åíèå: %d\n", (void*)pf, *pf);
    pf--;
    printf("Ïîñëå --: %p, çíà÷åíèå: %d\n", (void*)pf, *pf);
    return 0;
}
