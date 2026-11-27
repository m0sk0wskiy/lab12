#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    float PI = 3.14159, * p1, * p2;
    p1 = p2 = &PI;
    printf("Ïî àäðåñó p1=%p õðàíèòñÿ *p1=%g\n", (void*)p1, *p1);
    printf("Ïî àäðåñó p2=%p õðàíèòñÿ *p2=%g\n", (void*)p2, *p2);
    printf("\nÂ øåñòíàäöàòåðè÷íîì ôîðìàòå:\n");
    printf("Àäðåñ p1=%x\n", (unsigned int)(size_t)p1);
    printf("Àäðåñ p2=%x\n", (unsigned int)(size_t)p2);
    return 0;
}
