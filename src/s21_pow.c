#include "s21_math.h"

long double s21_pow(double x, double y) {
  if (y < 0) {
    x = 1 / s21_exp(-y * s21_log(x));
  } else if (y == 0) {
    x = 1;
  } else {
    x = s21_exp(y * s21_log(x));
  }
  return x;
}
