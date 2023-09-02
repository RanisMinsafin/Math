#include "s21_math.h"

long double s21_log(double x) {
  long double log = 0;
  if (x < 0) {
    log = S21_NAN;
  } else if (x == 0) {
    log = -1 / 0.0;
  } else if (x > 1) {
    int counter = 0;
    for (; x > 1; counter++) x /= 10;
    log = s21_log(x) + counter * S21_LN10;
  } else {
    long double tmp = --x;
    int n = 1;
    do {
      long double current = 1;
      for (int i = 1; i <= n; i++) current *= x;
      if (n % 2 == 0) current = -current;
      tmp = log;
      log += current / n++;
    } while (s21_fabs(log - tmp) > S21_EPS);
  }
  return log;
}
