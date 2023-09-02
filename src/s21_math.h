#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>

#define S21_PI 3.14159265358979323846264338327950288
#define S21_2PI 6.28318530718
#define S21_EPS 1e-17
#define S21_EXP 2.718281828459045
#define S21_LN10 2.30258509299
#define S21_P2 1.57079632679
#define S21_P6 0.52359877559
#define S21_NAN 0.0 / 0.0

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double x, double y);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H_
