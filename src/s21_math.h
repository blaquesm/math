#ifndef MATH_H_
#define MATH_H_

#define S21_ZERO 0.0000000000000001
#define S21_NAN (0.0 / 0.0)
#define S21_INF (1.0 / 0.0)
#define S21_EXP 2.71828183


int s21_abs(int x);
long double s21_fabs(double x);
long double s21_pow(double base, double exp); //допилить
long double s21_log(double x);
long double s21_fmod(double x, double y);
long double s21_ceil(double x);
#endif // MATH_H_