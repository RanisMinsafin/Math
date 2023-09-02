#include "s21_math.h"

long double s21_cos(double x) {
  long double cos = 0;
  long double res = 1;
  long double n = 0;
  if (s21_fabs(x) >= S21_2PI) {
    x = s21_fmod(x, S21_2PI);
  }
  while (s21_fabs(res) > S21_EPS) {
    cos = cos + res;
    n = n + 2;
    res = -res * x * x / (n * (n - 1));
  }
  return cos;
}
