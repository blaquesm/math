#include "s21_math.h"

long double s21_fmod(double x, double y) {
    long double res = 0.000;
    int tmp = 0;
     if (x == 0.0  || y == 0.0) {
        res = S21_NAN;
    } else if (x == 0 && y != 0) {
        res = 0;
        } else {
        tmp = x / y;
        res = (long double)x - tmp * (long double)y;
    } 
    return res;
}
long double s21_ceil(double x) {
int tmp = 0;
int i = x;
long double res = 0.0;
if ( x > i && x > 0) {
res = i+1;
}
else if (x = 0){
res = x;
}
else {
    res = i;
}
return res;
}
long double s21_ceil(double x) {
int tmp = 0;
int i = x;
long double res = 0.0;
if ( x > i && x > 0) {
res = i+1;
}
else if (x = 0){
res = x;
}
else {
    res = i;
}
return res;
}