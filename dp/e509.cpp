//
// Created by 22057 on 2021/11/2.
//

#include "e509.h"

int E509::fib(int n) {
    int x0 = 0;
    int x1 = 1;
    for (int i = 0; i < n; ++i) {
        x1 = x0 + x1;
        x0 = x1 - x0;
    }

    return x0;
}
