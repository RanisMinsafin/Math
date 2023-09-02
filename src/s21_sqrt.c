#include "s21_math.h"

long double s21_sqrt(double x) {
  long double tmp = 0;
  long double result = x / 2;
  if (x < 0) {
    result = 0.0 / 0.0;
  } else if (x == 0) {
    result = 0.0;
  } else {
    while ((tmp - result) != 0) {
      tmp = result;
      result = (tmp + (x / tmp)) / 2;
    }
  }
  return result;
}
