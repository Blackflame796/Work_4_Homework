#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B;

    int condition;

    printf("=== Пароль от Wi-Fi ===\n");

    printf("Введите два целых числа (A и B): ");

    scanf("%d %d", &A, &B);

    condition = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);

    printf("Пароль активен (1 - да, 0 - нет): %d\n", condition);

    return 0;
}