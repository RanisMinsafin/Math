#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double save = x;
  long double remainder = 0;
  if (y == 0) {
    remainder = 0.0 / 0.0;
  } else {
    if (x < 0) x *= -1;
    if (y < 0) y *= -1;
    remainder = x;
    int i = 1;
    while (remainder >= y) {
      remainder = x - y * i;
      i++;
    }
    if (save < 0) remainder *= -1;
  }
  return remainder;
}
