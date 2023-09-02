#include "s21_math.h"

long double s21_sin(double x) {
  long double sin = 0;
  long double res;
  long double n = 1;
  if (s21_fabs(x) >= S21_2PI) {
    x = s21_fmod(x, S21_2PI);
  }
  res = x;
  while (s21_fabs(res) > S21_EPS) {
    sin = sin + res;
    n = n + 2;
    res = -res * x * x / (n * (n - 1));
  }
  return sin;
}
