#ifndef MAIN_H
#define MAIN_H
#include "help_function/help_function.h"
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>

void Q1();
int APowXModP(int base, int degree, int module_value);
unsigned gcd(unsigned a, unsigned b);
int gcdExtended(int a, int b, int *x, int *y);
int RSA(int primeNumber1, int primeNumber2);
long long power(long long base, long long exp, long long mod);
bool miller_rabin_test(long long n, int k);

#endif //MAIN_H