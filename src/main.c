#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculating.h"  // Подключаем заголовочный файл

// Загрузка настроек (заглушка, нужно заменить на чтение из БД)
void load_settings(double *p, double *h, double *d, double *st, double *mk, double *a, double *spi, double *marge) {
    *p = 270;     // номинальная мощность принтера
    *h = 3;     // тариф электроэнергии
    *d = 1.5;     // коэффициент выбраковки
    *st = 1500;    // стоимость катушки
    *mk = 1000;   // вес катушки
    *a = 15000;    // амортизация
    *spi = 3;     // срок полезного использования
    *marge = 150;  // наценка
}

int main() {
    // Загрузка настроек
    double p, h, d, st, mk, a, spi, marge;
    load_settings(&p, &h, &d, &st, &mk, &a, &spi, &marge);

    // Ввод данных от пользователя
    printf("Введите параметры для расчета:\n");

    double hours, minutes;
    printf("Время печати (часы): ");
    scanf("%lf", &hours);
    printf("Время печати (минуты): ");
    scanf("%lf", &minutes);

    if (minutes > 60) {
        hours += (int)(minutes / 60);
        minutes = fmod(minutes, 60);  // Используем fmod для остатка от деления
    }
    double t = hours * 60 + minutes;  // Общее время в минутах

    double md;
    printf("Масса детали (г): ");
    scanf("%lf", &md);

    int x;
    printf("Количество экземпляров (шт): ");
    scanf("%d", &x);

    double mod;
    printf("Моделирование (руб): ");
    scanf("%lf", &mod);

    double post;
    printf("Постобработка (руб): ");
    scanf("%lf", &post);

    // Расчет амортизации
    double am = amortization(a, t, spi);

    // Расчет себестоимости
    double cost = cost_prise(p, t, h, md, d, st, mk, am, post, x);

    // Расчет итоговой стоимости
    double result = calculating(cost, mod, marge);

    // Вывод результатов
    printf("\nРезультаты расчета:\n");
    printf("Себестоимость: %.2f руб.\n", cost);
    printf("Итоговая стоимость: %.2f руб.\n", result);

    return 0;
}