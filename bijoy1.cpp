#include <stdio.h>
int ch(int n) {
    while(n) {
        if(n%10 == 7)
            return 1;
        n /= 10;
    }
    return 0;
}
int main() {
    int n, m, k;
    while(scanf("%d %d %d", &n, &m, &k) == 3) {
        if(n == 0 && m == 0 && k == 0)
            break;
        int cnt = , found = 0;
        int sum = 0, x, y, kk = 0;
        while(cnt--) {
            x = sum + m;
            y = sum + n + (n-m);
            if(x%7 == 0 || ch(x)) {
                kk++;
                if(kk == k) {
                    found = 1;
                    printf("%d\n", x);
                    break;
                }
            }
            if(m != 1 && m != n && (y%7 == 0 || ch(y))) {
                kk++;
                if(kk == k) {
                    found = 1;
                    printf("%d\n", y);
                    break;
                }
            }
            sum += 2*n-2;
        }
    }
    return 0;
}
