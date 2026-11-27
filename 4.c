#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    float array[10] = {
        1.1, 2.2, 3.3, 4.4, 5.5,
        6.6, 7.7, 8.8, 9.9, 10.1
    };
    float* ptr_a;
    // 4.1 Àäðåñà ìàññèâà
    printf("4.1 Àäðåñà ìàññèâà:\n");
    printf("array     = %p\n", (void*)array);
    printf("&array[0] = %p\n", (void*)&array[0]);
    printf("&array    = %p\n\n", (void*)&array);
    // 4.2 Ïåðåìåùåíèå óêàçàòåëÿ
    ptr_a = array;
    printf("4.2 Ïåðåìåùåíèå óêàçàòåëÿ:\n");
    printf("Íà÷àëî: ptr_a = %p, *ptr_a = %.1f\n",
        (void*)ptr_a, *ptr_a);
    ptr_a++;
    printf("ptr_a++: ptr_a = %p, *ptr_a = %.1f\n",
        (void*)ptr_a, *ptr_a);
    ptr_a = array;
    ptr_a = ptr_a + 4;
    printf("ptr_a+4: ptr_a = %p, *ptr_a = %.1f\n",
        (void*)ptr_a, *ptr_a);
    ptr_a = ptr_a - 2;
    printf("ptr_a-2: ptr_a = %p, *ptr_a = %.1f\n\n",
        (void*)ptr_a, *ptr_a);

    // 4.3 Ïðÿìîé ïðîõîä ñ øàãîì 2
    printf("4.3 Ïðÿìîé ïðîõîä ïî ìàññèâó ñ øàãîì 2:\n");
    ptr_a = array;
    while (ptr_a < array + 10) {
        printf("Àäðåñ: %p, çíà÷åíèå: %.1f\n",
            (void*)ptr_a, *ptr_a);
        ptr_a += 2;
    }
    // 4.4 Îáðàòíûé ïðîõîä
    printf("\n4.4 Îáðàòíûé ïðîõîä ïî ìàññèâó:\n");
    ptr_a = array + 10;
    while (ptr_a > array) {
        ptr_a--;
        printf("Àäðåñ: %p, çíà÷åíèå: %.1f\n",
            (void*)ptr_a, *ptr_a);
    }
    return 0;
}
