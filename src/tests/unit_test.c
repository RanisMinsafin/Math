#include <check.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"

double n;

#define s21_E 2.71828182845
#define s21_LOG2E 1.44269504088
#define s21_LOG10E 0.43429448190
#define s21_LN2 0.69314718055
#define s21_LN10 2.30258509299
#define s21_1_P 0.31830988618
#define s21_2_P 0.63661977236
#define s21_2_SQRTP 1.12837916709
#define s21_SQRT2 1.41421356237
#define s21_SQRT1_2 0.70710678118

#define s21_NUN 0.0 / 0.0
#define s21_INF 1.0 / 0.0
#define s21_MAX_D 9223372036854775807.0

#define s21_P_6 0.52359877559
#define s21_P_4 0.78539816339
#define s21_P_3 1.0471975512
#define s21_P_2 1.57079632679

#define s21_3P_4 2.35619449019
#define s21_5P_6 2.61799387799
#define s21_P 3.14159265358
#define s21_7P_6 3.66519142919
#define s21_5P_4 3.92699081699
#define s21_4P_3 4.18879020479
#define s21_3P_2 4.71238898038
#define s21_5P_3 5.23598775598
#define s21_7P_4 5.49778714378
#define s21_11P_6 5.75958653158
#define s21_5P_3 5.23598775598
#define s21_2P_3 2.09439510239
#define s21_2P 6.28318530718

START_TEST(s21_absTEST) {
  ck_assert_int_eq(s21_abs(-1), abs(-1));
  ck_assert_int_eq(s21_abs(5), abs(5));
  ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647));
  ck_assert_int_eq(s21_abs(-0xA13), abs(-0xA13));
  ck_assert_int_eq(s21_abs(13), abs(13));
  ck_assert_int_eq(s21_abs(-0), abs(-0));
  ck_assert_int_eq(s21_abs(-05), abs(-05));
  ck_assert_int_eq(s21_abs(-00002345670), abs(-00002345670));
  ck_assert_int_eq(s21_abs(123456789), abs(123456789));
  ck_assert_int_eq(s21_abs(100), abs(100));
  ck_assert_int_eq(s21_abs(-100), abs(-100));
  ck_assert_int_eq(s21_abs(0), abs(0));
}
END_TEST

START_TEST(s21_cosTEST) {
  ck_assert_ldouble_eq_tol(s21_cos(s21_P_6), cos(s21_P_6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P_4), cos(s21_P_4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P_3), cos(s21_P_3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_2P_3), cos(s21_2P_3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_3P_4), cos(s21_3P_4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_5P_6), cos(s21_5P_6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_7P_6), cos(s21_7P_6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_5P_4), cos(s21_5P_4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_4P_3), cos(s21_4P_3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(3 * s21_P / 2), cos(3 * s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_5P_3), cos(s21_5P_3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_7P_4), cos(s21_7P_4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_11P_6), cos(s21_11P_6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_2P), cos(s21_2P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P / 6), cos(s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P / 4), cos(s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P / 2), cos(s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(2 * s21_P / 3), cos(2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(3 * s21_P / 4), cos(3 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(5 * s21_P / 6), cos(5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P), cos(s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(7 * s21_P / 6), cos(7 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(5 * s21_P / 4), cos(5 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(4 * s21_P / 3), cos(4 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(3 * s21_P / 2), cos(3 * s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(5 * s21_P / 3), cos(5 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(7 * s21_P / 4), cos(7 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(11 * s21_P / 6), cos(11 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(2 * s21_P), cos(2 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(11 * s21_P / 17), cos(11 * s21_P / 17),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(32 * s21_P / 3), cos(32 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-0), cos(-0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-s21_P / 6), cos(-s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-s21_P / 4), cos(-s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-s21_P / 2), cos(-s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-2 * s21_P / 3), cos(-2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-3 * s21_P / 4), cos(-3 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-5 * s21_P / 6), cos(-5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-s21_P), cos(-s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-7 * s21_P / 6), cos(-7 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-5 * s21_P / 4), cos(-5 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-4 * s21_P / 3), cos(-4 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-3 * s21_P / 2), cos(-3 * s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-5 * s21_P / 3), cos(-5 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-7 * s21_P / 4), cos(-7 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-11 * s21_P / 6), cos(-11 * s21_P / 6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-2 * s21_P), cos(-2 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-11 * s21_P / 17), cos(-11 * s21_P / 17),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-32 * s21_P / 3), cos(-32 * s21_P / 3),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(2), cos(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(3 * s21_P), cos(3 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0.123456), cos(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-0.123456), cos(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0x123), cos(0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-0x123), cos(-0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(10000 * s21_P), cos(10000 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-10000 * s21_P), cos(-10000 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P / 3), cos(s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P / 6), cos(s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P / 2), cos(s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P / 2), cos(s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(5 * s21_P / 6), cos(5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(s21_P), cos(s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(126.8647465), cos(126.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-235.3456458), cos(-235.3456458), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(75846.8647465), cos(75846.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-92553.3456458), cos(-92553.3456458), 1e-6);
}
END_TEST

START_TEST(s21_sinTEST) {
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P / 6), sin(s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P / 4), sin(s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P / 2), sin(s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2 * s21_P / 3), sin(2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3 * s21_P / 4), sin(3 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(5 * s21_P / 6), sin(5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P), sin(s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(7 * s21_P / 6), sin(7 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(5 * s21_P / 4), sin(5 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(4 * s21_P / 3), sin(4 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3 * s21_P / 2), sin(3 * s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(5 * s21_P / 3), sin(5 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(7 * s21_P / 4), sin(7 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(11 * s21_P / 6), sin(11 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2 * s21_P), sin(2 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(11 * s21_P / 17), sin(11 * s21_P / 17),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(32 * s21_P / 3), sin(32 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-0), sin(-0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-s21_P / 6), sin(-s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-s21_P / 4), sin(-s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-s21_P / 2), sin(-s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-2 * s21_P / 3), sin(-2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-3 * s21_P / 4), sin(-3 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-5 * s21_P / 6), sin(-5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-s21_P), sin(-s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-7 * s21_P / 6), sin(-7 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-5 * s21_P / 4), sin(-5 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-4 * s21_P / 3), sin(-4 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-3 * s21_P / 2), sin(-3 * s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-5 * s21_P / 3), sin(-5 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-7 * s21_P / 4), sin(-7 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-11 * s21_P / 6), sin(-11 * s21_P / 6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-2 * s21_P), sin(-2 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-11 * s21_P / 17), sin(-11 * s21_P / 17),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-32 * s21_P / 3), sin(-32 * s21_P / 3),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2), sin(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3 * s21_P), sin(3 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0.123456), sin(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-0.123456), sin(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0x123), sin(0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-0x123), sin(-0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(10000 * s21_P), sin(10000 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-10000 * s21_P), sin(-10000 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P / 2), sin(s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2 * s21_P / 3), sin(2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(5 * s21_P / 6), sin(5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P), sin(s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(126.8647465), sin(126.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-235.3456458), sin(-235.3456458), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(75846.8647465), sin(75846.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-92553.3456458), sin(-92553.3456458), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P / 3), sin(s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(s21_P / 6), sin(s21_P / 6), 1e-6);
}
END_TEST

START_TEST(s21_tanTEST) {
  ck_assert_ldouble_eq_tol(tan(-3 * s21_P / 2), tan(-3 * s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(s21_P / 6), tan(s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(s21_P / 4), tan(s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(2 * s21_P / 3), tan(2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(3 * s21_P / 4), tan(3 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(5 * s21_P / 6), tan(5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(s21_P), tan(s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(7 * s21_P / 6), tan(7 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(5 * s21_P / 4), tan(5 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(4 * s21_P / 3), tan(4 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(5 * s21_P / 3), tan(5 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(7 * s21_P / 4), tan(7 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(11 * s21_P / 6), tan(11 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(2 * s21_P), tan(2 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(11 * s21_P / 17), tan(11 * s21_P / 17),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(32 * s21_P / 3), tan(32 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0), tan(-0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-s21_P / 6), tan(-s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-s21_P / 4), tan(-s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-2 * s21_P / 3), tan(-2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-3 * s21_P / 4), tan(-3 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-5 * s21_P / 6), tan(-5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-s21_P), tan(-s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-7 * s21_P / 6), tan(-7 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-5 * s21_P / 4), tan(-5 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-4 * s21_P / 3), tan(-4 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-5 * s21_P / 3), tan(-5 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-7 * s21_P / 4), tan(-7 * s21_P / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-11 * s21_P / 6), tan(-11 * s21_P / 6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-2 * s21_P), tan(-2 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-11 * s21_P / 17), tan(-11 * s21_P / 17),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-32 * s21_P / 3), tan(-32 * s21_P / 3),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(2), tan(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(3 * s21_P), tan(3 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0.123456), tan(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0.123456), tan(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0x123), tan(0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0x123), tan(-0x123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(10000 * s21_P), tan(10000 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-10000 * s21_P), tan(-10000 * s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(s21_P / 3), tan(s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(s21_P / 6), tan(s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(2 * s21_P / 3), tan(2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(5 * s21_P / 6), tan(5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(s21_P), tan(s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(126.8647465), tan(126.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-235.3456458), tan(-235.3456458), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(75846.8647465), tan(75846.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-92553.3456458), tan(-92553.3456458), 1e-6);
}
END_TEST

START_TEST(s21_acosTEST) {
  ck_assert_ldouble_eq_tol(s21_acos(1.000000), acos(1.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.866025), acos(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.707107), acos(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.000000), acos(0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.500000), acos(-0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.707107), acos(-0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.866025), acos(-0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.866025), acos(-0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.707107), acos(-0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.000000), acos(-0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.500000), acos(0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.707107), acos(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.866025), acos(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.445738), acos(-0.445738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.123456), acos(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.123456), acos(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.00001), acos(0.00001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.7), acos(0.7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.85), acos(0.85), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.99999991), acos(0.99999991), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.9), acos(-0.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.69), acos(-0.69), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.2), acos(-0.2), 1e-6);
  ck_assert_ldouble_nan(s21_acos(10000));
  ;
  ck_assert_ldouble_nan(s21_acos(-1.0011));
}
END_TEST

START_TEST(s21_asinTEST) {
  ck_assert_ldouble_eq_tol(s21_asin(1.000000), asin(1.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.866025), asin(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.707107), asin(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.000000), asin(0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.500000), asin(-0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.707107), asin(-0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.866025), asin(-0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-1.000000), asin(-1.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.866025), asin(-0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.707107), asin(-0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.000000), asin(-0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.500000), asin(0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.866025), asin(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.445738), asin(-0.445738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.123456), asin(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.123456), asin(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.1111), asin(0.1111), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.7), asin(0.7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.85), asin(0.85), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.9999999), asin(0.9999999), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.2), asin(-0.2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.66666), asin(0.66666), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.787), asin(-0.787), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.9), asin(-0.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-6);
  ck_assert_ldouble_nan(s21_asin(10));
  ck_assert_ldouble_nan(s21_asin(-1.0011));
}
END_TEST

START_TEST(s21_atanTEST) {
  ck_assert_ldouble_eq_tol(s21_atan(1.000000), atan(1.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.866025), atan(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.866025), atan(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.707107), atan(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.000000), atan(0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.500000), atan(-0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.707107), atan(-0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.866025), atan(-0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(1.000000), atan(1.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.866025), atan(-0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.707107), atan(-0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.500000), atan(-0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.000000), atan(-0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.500000), atan(0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.707107), atan(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.866025), atan(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(1.000000), atan(1.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.445738), atan(-0.445738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.500000), atan(-0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.123456), atan(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-0.123456), atan(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(0.0011), atan(0.0011), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(10), atan(10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(100000), atan(100000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-100), atan(-100), 1e-6);
  ck_assert_ldouble_eq_tol(s21_atan(-500000), atan(-500000), 1e-6);
}
END_TEST

START_TEST(s21_expTEST) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.5), exp(-1.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-15), exp(-15), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(1.5), exp(1.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(10), exp(10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-35), exp(-35), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-40), exp(-40), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(1.511011), exp(1.511011), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1.511011), exp(-1.511011), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(.000000), exp(.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.866025), exp(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.707107), exp(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.000000), exp(0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.500000), exp(-0.500000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.707107), exp(-0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.445738), exp(-0.445738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.445738), exp(0.445738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.876412), exp(0.876412), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.987451), exp(0.987451), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.987565), exp(0.987565), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.799415), exp(0.799415), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.456123), exp(0.456123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.216875), exp(0.216875), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.978464), exp(0.978464), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.215488), exp(0.215488), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.755422), exp(0.755422), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.876412), exp(-0.876412), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.987451), exp(-0.987451), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.987565), exp(-0.987565), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.799415), exp(-0.799415), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.456123), exp(-0.456123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.21687), exp(-0.21687), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.978464), exp(-0.978464), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.215488), exp(-0.215488), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.755422), exp(-0.755422), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0.123456), exp(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-0.123456), exp(-0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-5), exp(-5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-5.946047569), exp(-5.946047569), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-13.253678), exp(-13.253678), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-30), exp(-30), 1e-7);
  ck_assert_ldouble_infinite(s21_exp(4647475856));
  ck_assert_ldouble_eq_tol(s21_exp(-5647475856), exp(-5647475856), 1e-6);
}
END_TEST

START_TEST(s21_logTEST) {
  ck_assert_ldouble_eq_tol(s21_log(35), log(35), 6);
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 6);
  ck_assert_ldouble_eq_tol(s21_log(123456), log(123456), 6);
  ck_assert_ldouble_eq_tol(s21_log(123456789), log(123456789), 6);
  ck_assert_ldouble_eq_tol(s21_log(0.123), log(0.123), 6);
  ck_assert_ldouble_eq_tol(s21_log(0.12456), log(0.123456), 6);
  ck_assert_ldouble_eq_tol(s21_log(0.1234567), log(0.1234567), 6);
  ck_assert_ldouble_eq_tol(s21_log(0.12345678), log(.12345678), 6);
  ck_assert_ldouble_eq_tol(s21_log(0.123456789), log(0.12456789), 6);
  ck_assert_ldouble_eq_tol(s21_log(0.1234567891), log(0.1234567891), 6);
  ck_assert_ldouble_eq_tol(s21_log(0.1234567891234567), log(0.1234567891234567),
                           6);
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(786), log(786), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.866025), log(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.707107), log(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(78967456), log(78967456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(707107), log(707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(5738), log(5738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.445738), log(0.445738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.876412), log(0.876412), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.987451), log(0.987451), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.987565), log(0.987565), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.799415), log(0.799415), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.456123), log(0.456123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.216875), log(0.216875), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.978464), log(0.978464), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.215488), log(0.215488), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.755422), log(0.755422), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(76412), log(76412), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(987451.98465), log(987451.98465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(987565.9874641213656),
                           log(987565.9874641213656), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(799415.5649), log(799415.5649), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(456123.97904), log(456123.97904), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(216875.6649), log(216875.6649), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(9), log(9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(88), log(88), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(5422), log(5422), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.123456), log(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(123456), log(123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1e-6);
  ck_assert_ldouble_nan(s21_log(-1));
  ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.1234), log(0.1234), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.9876), log(0.9876), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(s21_E), log(s21_E), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(123), log(123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(547893), log(547893), 1e-6);
}
END_TEST

START_TEST(s21_powTEST) {
  ck_assert_ldouble_eq_tol(s21_pow(1, 1), pow(1, 1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.000, 0.000), pow(0.000, 0.000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.000, 1.000), pow(0.000, 1.000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0, 0), pow(0, 0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.698, 7), pow(0.698, 7), 1e-6);
  ck_assert_int_eq(s21_pow(-2.6, 3.45) == NAN, pow(-2.6, 3.45) == NAN);
  ck_assert_ldouble_eq_tol(s21_pow(0, 0.), pow(0, 0.), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(10, 1.5), pow(10, 1.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1.5, 1.5), pow(1.5, 1.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0, 1), pow(0, 1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1, 0), pow(1, 0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1.000, 0.000), pow(1.000, 0.000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.215, 0.215), pow(0.215, 0.215), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.978464, 5), pow(0.978464, 5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.986, 10), pow(0.986, 10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(8.654, 0.7), pow(8.654, 0.7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(8.654, -0.7), pow(8.654, -0.7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.978464, -5), pow(0.978464, -5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.756, -7), pow(0.756, -7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0, 5), pow(0, 5), 1e-6);
  ck_assert_ldouble_infinite(s21_pow(0, -5));
  ck_assert_ldouble_nan(s21_pow(-6.7758456, 5.45747));
  ck_assert_ldouble_eq_tol(s21_pow(9.35378, -9.34748), pow(9.35378, -9.34748),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(53.5685, -11.39064), pow(53.5685, -11.39064),
                           1e-6);
  ck_assert_ldouble_nan(s21_pow(-56.346786, 2.5346));
  ck_assert_ldouble_eq_tol(s21_pow(56.346786, 2.5346), pow(56.346786, 2.5346),
                           1e-6);
}
END_TEST

START_TEST(s21_sqrtTEST) {
  ck_assert_ldouble_eq_tol(s21_sqrt(35), sqrt(35), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(123456), sqrt(123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(123456789), sqrt(123456789), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.123456), sqrt(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(786), sqrt(786), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.866025), sqrt(0.866025), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.707107), sqrt(0.707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.000000), sqrt(0.000000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(78967456), sqrt(78967456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(707107), sqrt(707107), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(5738), sqrt(5738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.445738), sqrt(0.445738), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.876412), sqrt(0.876412), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.987451), sqrt(0.987451), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.987565), sqrt(0.987565), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.799415), sqrt(0.799415), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.456123), sqrt(0.456123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.216875), sqrt(0.216875), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.978464), sqrt(0.978464), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.215488), sqrt(0.215488), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.755422), sqrt(0.755422), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(76412), sqrt(76412), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(987451.98465), sqrt(987451.98465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(987565.9874641213656),
                           sqrt(987565.9874641213656), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(799415.5649), sqrt(799415.5649), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(456123.97904), sqrt(456123.97904), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(216875.6649), sqrt(216875.6649), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(9), sqrt(9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(88), sqrt(88), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(5422), sqrt(5422), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0.123456), sqrt(0.123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(123456), sqrt(123456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(s21_P / 3), sqrt(s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(s21_P / 6), sqrt(s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(3), sqrt(3), 1e-6);
  ck_assert_ldouble_nan(s21_sqrt(-1.234567));
  ck_assert_ldouble_eq_tol(s21_sqrt(s21_P / 2), sqrt(s21_P / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(2 * s21_P / 3), sqrt(2 * s21_P / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(5 * s21_P / 6), sqrt(5 * s21_P / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(s21_P), sqrt(s21_P), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(126.8647465), sqrt(126.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(75846.8647465), sqrt(75846.8647465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(2129412464.86474652345),
                           sqrt(2129412464.86474652345), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(2129412464.86474652345),
                           sqrt(2129412464.86474652345), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(788544), sqrt(788544), 1e-6);
}
END_TEST

START_TEST(s21_ceilTEST) {
  ck_assert_ldouble_eq_tol(s21_ceil(-0.9), ceil(-0.9), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(1.1), ceil(1.1), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(10.98), ceil(10.98), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(123.123), ceil(123.123), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(3.33), ceil(3.33), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(15.5), ceil(15.5), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(16.5), ceil(16.5), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1.1), ceil(-1.1), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(-10.98), ceil(-10.98), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(-123.123), ceil(-123.123), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(-3.33), ceil(-3.33), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(-15.5), ceil(-15.5), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(-16.5), ceil(-16.5), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(123456.5), ceil(123456.5), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(123456.55), ceil(123456.55), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(123456.555), ceil(123456.555), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(123456.5555), ceil(123456.5555), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(1.00005), ceil(1.00005), 6);
  ck_assert_ldouble_eq_tol(s21_ceil(0), ceil(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1), ceil(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1), ceil(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(2), ceil(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-2), ceil(-2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1456), ceil(1456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(65641), ceil(65641), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1456), ceil(-1456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-65641), ceil(-65641), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(786), ceil(786), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(423), ceil(423), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(86), ceil(86), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(983), ceil(983), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-983), ceil(-983), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(751), ceil(751), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-751), ceil(-751), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1000), ceil(1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1000), ceil(-1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(987654), ceil(987654), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-987654), ceil(-987654), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(3465), ceil(3465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-3465), ceil(-3465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(751.12), ceil(751.12), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-751.12), ceil(-751.12), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1000.57), ceil(1000.57), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1000.57), ceil(-1000.57), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(987654.785), ceil(987654.785), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-987654.785), ceil(-987654.785), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(3465.0000001), ceil(3465.0000001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-3465.0000001), ceil(-3465.0000001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(0), ceil(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(0.0001), ceil(0.0001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(11.5), ceil(11.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(1000000000000.2), ceil(1000000000000.2),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-1), ceil(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-25.99999999999), ceil(-25.99999999999),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-200000000000000.9995555464654878484),
                           ceil(-200000000000000.9995555464654878484), 1e-6);
}
END_TEST

START_TEST(s21_fabsTEST) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1.001), fabs(-1.001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1.001), fabs(1.001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1.1), fabs(1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.1), fabs(-1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1000.1), fabs(1000.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1000.1), fabs(-1000.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1000.042), fabs(1000.042), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1000.042), fabs(-1000.042), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(987633.465), fabs(987633.465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-987633.465), fabs(-987633.465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(897645.1), fabs(897645.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-897645.1), fabs(897645.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(0.75757), fabs(0.75757), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-0.75757), fabs(-0.75757), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(10.9), fabs(10.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1.1), fabs(1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(10.98), fabs(10.98), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(123.123), fabs(123.123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(3.33), fabs(3.33), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(15.5), fabs(15.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(16.5), fabs(16.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.1), fabs(-1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-10.98), fabs(-10.98), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-123.123), fabs(-123.123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-3.33), fabs(-3.33), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-15.5), fabs(-15.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-16.5), fabs(-16.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(123456.5), fabs(123456.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(123456.55), fabs(123456.55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(123456.555), fabs(123456.555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(123456.5555), fabs(123456.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(0.5555), fabs(0.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1.5555), fabs(1.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.5555), fabs(-1.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(2.5555), fabs(2.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-2.5555), fabs(-2.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1456.5555), fabs(1456.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(65641.5555), fabs(65641.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1456.5555), fabs(-1456.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-65641.5555), fabs(-65641.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(786.5555), fabs(786.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(423.5555), fabs(423.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(86.5555), fabs(86.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(983.5555), fabs(983.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-983.5555), fabs(-983.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(751.5555), fabs(751.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-751.5555), fabs(-751.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1000.5555), fabs(1000.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.0), fabs(-1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-10.999999), fabs(-10.999999), 1e-6);
  ck_assert_ldouble_eq_tol(
      s21_fabs(-10000000000000000000.33333333333559595989898),
      fabs(-10000000000000000000.33333333333559595989898), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(5.0), fabs(5.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(12589487885888888882.588999898982222222222),
                           fabs(12589487885888888882.588999898982222222222),
                           1e-6);
}
END_TEST

START_TEST(s21_floorTEST) {
  ck_assert_ldouble_eq_tol(s21_floor(10.9), floor(10.9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(1.1), floor(1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(10.98), floor(10.98), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(123.123), floor(123.123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(3.33), floor(3.33), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(15.5), floor(15.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(16.5), floor(16.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-1.1), floor(-1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-10.98), floor(-10.98), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-123.123), floor(-123.123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-3.33), floor(-3.33), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-15.5), floor(-15.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-16.5), floor(-16.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(123456.5), floor(123456.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(123456.55), floor(123456.55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(123456.555), floor(123456.555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(123456.5555), floor(123456.5555), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(0), floor(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(1), floor(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-1), floor(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(2), floor(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-2), floor(-2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(1456), floor(1456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(65641), floor(65641), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-1456), floor(-1456), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-65641), floor(-65641), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(786), floor(786), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(423), floor(423), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(86), floor(86), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(983), floor(983), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-983), floor(-983), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(751), floor(751), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-751), floor(-751), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(1000), floor(1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-1000), floor(-1000), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(987654), floor(987654), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-987654), floor(-987654), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(3465), floor(3465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-3465), floor(-3465), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(751.12), floor(751.12), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-751.12), floor(-751.12), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(1000.57), floor(1000.57), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-1000.57), floor(-1000.57), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(987654.785), floor(987654.785), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-987654.785), floor(-987654.785), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(3465.0000001), floor(3465.0000001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-3465.0000001), floor(-3465.0000001),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(0), floor(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(0.0001), floor(0.0001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(11.5), floor(11.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(1000000000000.2), floor(1000000000000.2),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-1), floor(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-25.99999999999), floor(-25.99999999999),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-200000000000000.9995555464654878484),
                           floor(-200000000000000.9995555464654878484), 1e-6);
}
END_TEST

START_TEST(s21_fmodTEST) {
  ck_assert_ldouble_eq_tol(s21_fmod(10, 3), fmod(10, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-10, 3), fmod(-10, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(123456, 20), fmod(123456, 20), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0, 1), fmod(0, 1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0, -1), fmod(0, -1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(1, 1), fmod(1, 1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(1, -1), fmod(1, -1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(5.1, 3), fmod(5.1, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-5.1, 3), fmod(-5.1, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(5.3, 3), fmod(5.3, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-5.3, 3), fmod(-5.3, 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(9874.785, 15), fmod(9874.785, 15), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-9874.785, 15), fmod(-9874.785, 15), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-3465.001, 8), fmod(-3465.001, 8), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(3465.001, 8), fmod(3465.001, 8), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0, 1.1), fmod(0, 1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0, 0.1), fmod(0, 0.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0, -1.1), fmod(0, -1.1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(1, 1.2), fmod(1, 1.2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(1, -1.2), fmod(1, -1.2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(5.1, 3.3), fmod(5.1, 3.3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-5.1, 3.3), fmod(-5.1, 3.3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(5.3, 3.3), fmod(5.3, 3.3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-5.3, 3.3), fmod(-5.3, 3.3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(9874.785, 15.15), fmod(9874.785, 15.15),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-9874.785, 15.15), fmod(-9874.785, 15.15),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-3465.001, 8.8), fmod(-3465.001, 8.8),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(3465.001, 8.8), fmod(3465.001, 8.8), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0.215, 0.215), fmod(0.215, 0.215), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0.978464, 5), fmod(0.978464, 5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0.986, 10), fmod(0.986, 10), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(8.654, 0.7), fmod(8.654, 0.7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(8.654, -0.7), fmod(8.654, -0.7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0.978464, -5), fmod(0.978464, -5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0.756, -7), fmod(0.756, -7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0.698, 7), fmod(0.698, 7), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-2, 2), fmod(-2, 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-789, -2), fmod(-789, -2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-0.654987, -4), fmod(-0.654987, -4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-0.264987, -5), fmod(-0.264987, -5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(2, 1), fmod(2, 1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(2, 1), fmod(2, 1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(200000000000000000000.1, 10000000000000000),
                           fmod(200000000000000000000.1, 10000000000000000),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(25, 11), fmod(25, 11), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-12, 5), fmod(-12, 5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(-333.666, 145), fmod(-333.666, 145), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(0, 123), fmod(0, 123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fmod(8989989882, -148989.5989),
                           fmod(8989989882, -148989.5989), 1e-6);
  ck_assert_ldouble_nan(s21_fmod(2000, 0));
}
END_TEST

int main(void) {
  Suite *suite = suite_create("S21_Debuger");
  SRunner *srunner = srunner_create(suite);

  TCase *s21_abs_p = tcase_create("s21_abs");
  suite_add_tcase(suite, s21_abs_p);
  tcase_add_test(s21_abs_p, s21_absTEST);

  TCase *s21_cos_p = tcase_create("s21_cos");
  suite_add_tcase(suite, s21_cos_p);
  tcase_add_test(s21_cos_p, s21_cosTEST);

  TCase *s21_sin_p = tcase_create("s21_sin");
  suite_add_tcase(suite, s21_sin_p);
  tcase_add_test(s21_sin_p, s21_sinTEST);

  TCase *s21_tan_p = tcase_create("s21_tan");
  suite_add_tcase(suite, s21_tan_p);
  tcase_add_test(s21_tan_p, s21_tanTEST);

  TCase *s21_acos_p = tcase_create("s21_acos");
  suite_add_tcase(suite, s21_acos_p);
  tcase_add_test(s21_acos_p, s21_acosTEST);

  TCase *s21_asin_p = tcase_create("s21_asin");
  suite_add_tcase(suite, s21_asin_p);
  tcase_add_test(s21_asin_p, s21_asinTEST);

  TCase *s21_atan_p = tcase_create("s21_atan");
  suite_add_tcase(suite, s21_atan_p);
  tcase_add_test(s21_atan_p, s21_atanTEST);

  TCase *s21_exp_p = tcase_create("s21_exp");
  suite_add_tcase(suite, s21_exp_p);
  tcase_add_test(s21_exp_p, s21_expTEST);

  TCase *s21_log_p = tcase_create("s21_log");
  suite_add_tcase(suite, s21_log_p);
  tcase_add_test(s21_log_p, s21_logTEST);

  TCase *s21_pow_p = tcase_create("s21_pow");
  suite_add_tcase(suite, s21_pow_p);
  tcase_add_test(s21_pow_p, s21_powTEST);

  TCase *s21_sqrt_p = tcase_create("s21_sqrt");
  suite_add_tcase(suite, s21_sqrt_p);
  tcase_add_test(s21_sqrt_p, s21_sqrtTEST);

  TCase *s21_ceil_p = tcase_create("s21_ceil");
  suite_add_tcase(suite, s21_ceil_p);
  tcase_add_test(s21_ceil_p, s21_ceilTEST);

  TCase *s21_fabs_p = tcase_create("s21_fabs");
  suite_add_tcase(suite, s21_fabs_p);
  tcase_add_test(s21_fabs_p, s21_fabsTEST);

  TCase *s21_floor_p = tcase_create("s21_floor");
  suite_add_tcase(suite, s21_floor_p);
  tcase_add_test(s21_floor_p, s21_floorTEST);

  TCase *s21_fmod_p = tcase_create("s21_fmod");
  suite_add_tcase(suite, s21_fmod_p);
  tcase_add_test(s21_fmod_p, s21_fmodTEST);

  srunner_run_all(srunner, CK_VERBOSE);
  int number_failed = srunner_ntests_failed(srunner);
  srunner_free(srunner);

  return number_failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
