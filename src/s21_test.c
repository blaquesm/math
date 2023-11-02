#include "./s21_math.h"

#include <check.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

// s21_abs ->
START_TEST(test_abs_negative) {
  ck_assert_int_eq(abs(-1), s21_abs(-1));
}
END_TEST

START_TEST(test_abs_zero) {
  ck_assert_int_eq(abs(0), s21_abs(0));
}
END_TEST

START_TEST(test_abs_int32_max) {
  ck_assert_int_eq(abs(INT32_MAX), s21_abs(INT32_MAX));
}
END_TEST

START_TEST(test_abs_int32_min) {
  ck_assert_int_eq(abs(INT32_MIN), s21_abs(INT32_MIN));
}

START_TEST(test_abs_char_kek) {
  ck_assert_int_eq(abs('a'), s21_abs('a'));
}
END_TEST
// s21_abs <-

// s21_fabs ->
START_TEST(test_fabs_negative) {
  ck_assert_double_eq(fabs(-1.111111), s21_fabs(-1.111111));
}
END_TEST

START_TEST(test_fabs_zero) {
  ck_assert_double_eq(fabs(0.000000), s21_fabs(0.000000));
}
END_TEST

START_TEST(test_fabs_dbl_max) {
  ck_assert_double_eq(fabs(DBL_MAX), s21_fabs(DBL_MAX));
}
END_TEST

START_TEST(test_fabs_dbl_min) {
  ck_assert_double_eq(fabs(DBL_MIN), s21_fabs(DBL_MIN));
}

START_TEST(test_fabs_char_kek) {
  ck_assert_double_eq(fabs((double)'a'), s21_fabs((double)'a'));
}
END_TEST
// s21_fabs <-

// s21_floor ->

// s21_floor <-
START_TEST(test_floor_negative) {
  ck_assert_ldouble_eq(floor(-1.111111), s21_floor(-1.111111));
}
END_TEST

START_TEST(test_floor_negative2) {
  ck_assert_ldouble_eq(floor(-899898989898.123456), s21_floor(-899898989898.123456));
}
END_TEST

START_TEST(test_floor_normal1) {
  ck_assert_ldouble_eq(floor(3456.666666), s21_floor(3456.666666));
}
END_TEST

START_TEST(test_floor_normal2) {
  ck_assert_ldouble_eq(floor(899898989898.123456), s21_floor(899898989898.123456));
}
END_TEST

START_TEST(test_floor_dbl_min) {
  ck_assert_ldouble_eq(floor(DBL_MIN), s21_floor(DBL_MIN));
}
END_TEST

START_TEST(test_floor_zero) {
  ck_assert_ldouble_eq(floor(0), s21_floor(0));
}
END_TEST

START_TEST(test_floor_zero2) {
  ck_assert_ldouble_eq(floor(0.000000), s21_floor(0.000000));
}
END_TEST

// s21_fmod ->
START_TEST(test_fmod_negative) {
  ck_assert_ldouble_eq(fmod(-1, -1), s21_fmod(-1, -1));
}
END_TEST

START_TEST(test_fmod_normal1) {
  ck_assert_ldouble_eq(fmod(5.4945, 3.333333), s21_fmod(5.4945, 3.333333));
}
END_TEST

START_TEST(test_fmod_normal2) {
  ck_assert_ldouble_eq(fmod(164.666666, 4.123123), s21_fmod(1641645.666666, 4.123123));
}
END_TEST

START_TEST(test_fmod_zero) {
  ck_assert_ldouble_eq(fmod(0, 0), s21_fmod(0, 0));
}
END_TEST

START_TEST(test_fmod_zero2) {
  ck_assert_ldouble_eq(fmod(0.0000, 0.0000), s21_fmod(0.0000, 0.0000));
}
END_TEST
// s21_fmod <-

// s21_log ->
START_TEST(test_log_negative) {
  ck_assert_ldouble_nan(s21_log(-2));
}
END_TEST

START_TEST(test_log_normal) {
  ck_assert_ldouble_eq_tol(log(8), s21_log(8), 6);
}
END_TEST

START_TEST(test_log_normal2) {
  ck_assert_ldouble_eq_tol(log(666), s21_log(666), 1e-6);
}
END_TEST

START_TEST(test_log_normal3) {
  ck_assert_ldouble_eq_tol(log(6666), s21_log(6666), 1e-6);
}
END_TEST

START_TEST(test_log_normal4) {
  ck_assert_ldouble_eq_tol(log(0.898989), s21_log(0.898989), 1e-6);
}
END_TEST

START_TEST(test_log_normal5) {
  ck_assert_ldouble_eq_tol(log(0.00000005), s21_log(0.00000005), 1e-6);
}
END_TEST

START_TEST(test_log_normal6) {
  ck_assert_ldouble_eq_tol(log(6666666), s21_log(6666666), 1e-6);
}
END_TEST

START_TEST(test_log_char) {
  ck_assert_ldouble_eq_tol(log('a'), s21_log('a'), 1e-6);
}
END_TEST

// s21_pow ->
START_TEST(test_pow_negative) {
  ck_assert_ldouble_nan(s21_pow(-50.0, 1.2));
}
END_TEST

START_TEST(test_pow_normal) {
  ck_assert_ldouble_eq(pow(1, 1), s21_pow(1, 1));
}
END_TEST

START_TEST(test_pow_normal2) {
  ck_assert_ldouble_eq_tol(pow(0.555, 4), s21_pow(0.555, 4), 1e-6);
}
END_TEST

START_TEST(test_pow_normal3) {
  ck_assert_ldouble_eq_tol(pow(10, 2), s21_pow(10, 2), 1e-6);
}
END_TEST

START_TEST(test_pow_zero) {
  ck_assert_ldouble_eq_tol(pow(0, 0), s21_pow(0, 0), 1e-6);
}
END_TEST

START_TEST(test_pow_zero2) {
  ck_assert_ldouble_eq_tol(pow(0.000000, 0.000000), s21_pow(0.000000, 0.000000), 1e-6);
}
END_TEST

START_TEST(test_pow_normal4) {
  ck_assert_ldouble_eq_tol(pow(100.000000, 0.000000), s21_pow(100.000000, 0.000000), 1e-6);
}
END_TEST

START_TEST(test_pow_normal5) {
  ck_assert_ldouble_eq_tol(pow(0.000200, 0.000200), s21_pow(0.000200, 0.000200), 1e-6);
}
END_TEST

START_TEST(test_pow_normal6) {
  ck_assert_ldouble_eq_tol(pow(10.1234, -0.000200), s21_pow(10.1234, -0.000200), 1e-6);
}
END_TEST

START_TEST(test_pow_normal7) {
  ck_assert_ldouble_eq_tol(pow(2, 100), s21_pow(2, 100), 1e-6);
}
END_TEST

START_TEST(test_pow_char) {
  ck_assert_ldouble_eq_tol(pow('a', 1.2), s21_pow('a', 1.2), 1e-6);
}
END_TEST
// s21_pow <-

Suite *suite_insert(void) {
  Suite *s = suite_create("suite_insert");
  TCase *tc = tcase_create("insert_tc");
  // s21_abs ->
  tcase_add_test(tc, test_abs_negative);
  tcase_add_test(tc, test_abs_zero);
  tcase_add_test(tc, test_abs_int32_max);
  tcase_add_test(tc, test_abs_int32_min);
  tcase_add_test(tc, test_abs_char_kek);
  // s21_abs <-

  // s21_fabs ->
  tcase_add_test(tc, test_fabs_negative);
  tcase_add_test(tc, test_fabs_zero);
  tcase_add_test(tc, test_fabs_dbl_max);
  tcase_add_test(tc, test_fabs_dbl_min);
  tcase_add_test(tc, test_fabs_char_kek);
  // s21_fabs <-

  // s21_floor ->
  tcase_add_test(tc, test_floor_negative);
  tcase_add_test(tc, test_floor_negative2);
  tcase_add_test(tc, test_floor_normal1);
  tcase_add_test(tc, test_floor_normal2);
  tcase_add_test(tc, test_floor_dbl_min);
  tcase_add_test(tc, test_floor_zero);
  tcase_add_test(tc, test_floor_zero2);
  // s21_floor <-

  // s21_fmod ->
  tcase_add_test(tc, test_fmod_negative);
  tcase_add_test(tc, test_fmod_normal1);
  tcase_add_test(tc, test_fmod_normal2);
  tcase_add_test(tc, test_fmod_zero);
  tcase_add_test(tc, test_fmod_zero2);
  // s21_fmod <-

  // s21_log ->
  tcase_add_test(tc, test_log_negative);
  tcase_add_test(tc, test_log_normal);
  tcase_add_test(tc, test_log_normal2);
  tcase_add_test(tc, test_log_normal3);
  tcase_add_test(tc, test_log_normal4);
  tcase_add_test(tc, test_log_normal5);
  tcase_add_test(tc, test_log_normal6);
  tcase_add_test(tc, test_log_char);

  // s21_log <-

  // s21_pow ->
  tcase_add_test(tc, test_pow_negative);
  tcase_add_test(tc, test_pow_normal);
  tcase_add_test(tc, test_pow_normal2);
  tcase_add_test(tc, test_pow_normal3);
  tcase_add_test(tc, test_pow_zero);
  tcase_add_test(tc, test_pow_zero2);
  tcase_add_test(tc, test_pow_normal4);
  tcase_add_test(tc, test_pow_normal5);
  tcase_add_test(tc, test_pow_normal6);
  tcase_add_test(tc, test_pow_normal7);
  tcase_add_test(tc, test_pow_char);
  // s21_pow <-
  suite_add_tcase(s, tc);
  return s;
}

int main(void) {
  Suite *s1;
  SRunner *sr;
  s1 = suite_insert();
  sr = srunner_create(s1);
  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_VERBOSE);
  srunner_free(sr);
//  double loh1 = pow('a', 'z');
//  printf("%.20lf\n", loh1);
  return 0;
}


