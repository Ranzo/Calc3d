#include "calculating.h"

// Функция cost_prise
double cost_prise(double p, double t, double h, double md, double d, double st, double mk, double am, double post, int x) {
    p = fabs(p);  // номинальная мощность принтера
    t = fabs(t);  // время печати, в минутах
    h = fabs(h);  // тариф электроэнергии
    md = fabs(md);  // вес детали
    d = (d < 1) ? 1 : fabs(d);  // коэффициент выбраковки
    st = fabs(st);  // стоимость катушки
    mk = fabs(mk);  // вес катушки
    am = fabs(am);  // амортизация
    post = fabs(post);  // постобработка (обязательно проверить значение)
    x = abs(x);  // количество экземпляров

    double result = ((p / 1000) * (t / 60) * h + (md * d * (st / mk)) + (am + post)) * x;
    return round(result * 100) / 100;  // округление до 2 знаков после запятой
}

// Функция calculating
double calculating(double cost, double mod, double marg) {
    mod = fabs(mod);  // моделирование
    double margin = fabs(marg);  // процент наценки

    double result = (margin / 100 * cost + cost) + mod;
    return round(result * 100) / 100;  // округление до 2 знаков после запятой
}

// Функция amortization
double amortization(double a, double t, double spi) {

    // количество минут в году
    double minutes_in_year = 525600;    

    // Если СПИ установлен на 0, то присваеваем 1 (год)
    double year_norm;
    if (spi == 0) {
        year_norm = 100 / 1;
    } else {
        year_norm = 100 / spi;
    }

    //Считаем годовую амортизациюcost
    double year_am = a * year_norm / 100;

    //Считаем амортизацию за минуту и умножаем на время печати
    double am_per_minute = year_am / minutes_in_year * t;

    return am_per_minute;  // округление до 2 знаков после запятой
}