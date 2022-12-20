//
// Created by 윤영주 on 2022/12/21.
//

int fib(int n) {
    int a = 1, b = 1, c, cnt;
    if (n == 1 || n == 2) {
        return 1;
    }

    for (cnt = 3; cnt <= n; cnt++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}