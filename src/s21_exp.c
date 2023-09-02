#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 0.0;
  if (x < 0) {
    result = 1 / s21_exp(x * (-1));
  } else {
    long double difference = 1.0;
    long double epsilon = 1e-17;
    long double resultSecond = 0.0;
    for (int i = 0; difference > epsilon; i++) {
      long double buffer = 1.0;
      for (int j = 1; j <= i; j++) {
        buffer *= x;
        buffer /= j;
      }
      result += buffer;
      if (i > 0) {
        difference = s21_fabs(result - resultSecond);
      }
      resultSecond = result;
    }
  }
  return result;
}
