/**
 * golbach.c -- программа "Гипотеза Гольдбаха"
 *
 * Copyright (c) 2018, Zakharov Kirill <zaharov@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */
#include <stdio.h>
#include "func.h"
int main()
{
    int i;
    int k = 1;
    int n1;
    int n2;
    int simples[1000] = { 0 };  /*Создание массива, стостоящего только из простых чисел */
    for (i = 1; i < 1000; i++) {    /*Число простое, если для элемента i функция calcsimp(i)возвращает значение 1 */
        if (calcsimp(i) == 1) {
            simples[k] = i;
            k += 1;
        }
    }
    printf
        ("Введите пару четных чисел, таких что первое число больше 3 и меньше второго: ");
    scanf("%d %d", &n1, &n2);
    i = n1;
    while (i <= n2) {           /*цикл от 1го заданного эл-та до 2го с шагом 2 (всё четные значения от n1 до n2) */
        printf("%d  ", i);
        sigma(i, simples);      /*вывод способов и разложений для элемента i */
        i += 2;
    }
    return (0);
}
