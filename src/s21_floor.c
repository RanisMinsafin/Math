#include "s21_math.h"

long double s21_floor(double x) {
  long int result = x;
  if (x > 0) {
    result = (long double)result;
  } else if (x - result == 0) {
    result = (long double)result;
  } else {
    result = (long double)(result - 1);
  }
  return result;
}
