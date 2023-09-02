#include "s21_math.h"

long double s21_ceil(double num) {
  if (num - (long)num > 0)
    num = (long)num + 1;
  else if (num > -1 && num < 0)
    num = -0.0;
  else
    num = (long)num;

  return (long double)num;
}
