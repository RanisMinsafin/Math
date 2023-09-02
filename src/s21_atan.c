#include "s21_math.h"

long double s21_atan(double x) {
  int flag_minus = 0, flag_more = 0, count = 0;
  if (x < 0) {
    x = -x;
    flag_minus = 1;
  }
  if (x > 1) {
    x = 1 / x;
    flag_more = 1;
  }
  while (x > S21_PI / 12) {
    count++;
    x = (x * s21_sqrt(3) - 1) * (1 / (x + s21_sqrt(3)));
  }
  x = x * (0.5591370 / (1.408781 + x * x) + 0.6031057 - 0.0516045 * x * x);
  while (count > 0) {
    x += (S21_P6);
    count--;
  }
  if (flag_more) x = S21_P2 - x;
  if (flag_minus) x = -x;
  return x;
}