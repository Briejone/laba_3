#include "main.h"

int Q7(int a, int b, int c) {
    int res = pow_mod_10(a, b);
    res = pow_mod_10(res, c);
    return res;
}


