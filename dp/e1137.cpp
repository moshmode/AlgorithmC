//
// Created by 22057 on 2021/11/2.
//

#include "e1137.h"

vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b) {
    vector<vector<int>> c(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
        }
    }
    return c;

}

int E1137::tribonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (n == 2) {
        return 1;
    }

    //滚动数组
//
//    for (int i = 0; i < n-2; ++i) {
//        int temp = x1;
//        x2 = x0 + x1 + x2;
//        x1 = x2 - x0 - x1;
//        x0 = temp;
//    }
//    return x2;

    //矩阵快速幂
    vector<vector<int>> m = {{1, 1, 1},
                             {1, 0, 0},
                             {0, 1, 0}};
    vector<vector<int>> q = {{1, 1, 1},
                             {1, 0, 0},
                             {0, 1, 0}};

    n -= 3;
    while (n) {
        if ((n & 1) == 1) {
            q = multiply(q, m);

        }
        m = multiply(m, m);
        n >>= 1;
    }


    return q[0][0] + q[0][1];
}
