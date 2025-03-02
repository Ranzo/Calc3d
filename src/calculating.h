#ifndef CALCULATING_H
#define CALCULATING_H

#include <math.h>
#include <stdlib.h>

// Объявления функций
double cost_prise(double p, double t, double h, double md, double d, double st, double mk, double am, double post, int x);
double calculating(double cost, double mod, double marg);
double amortization(double a, double t, double spi);

#endif // CALCULATING_H