#include <cstdio>

int main() {
    int x = 0, y = 0, z = 0, n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &m);
        if (m > 0) x ++;
        else if(m < 0) y ++;
        else z ++;
    }
    printf("%.3lf\n", x * 1.0 / n);
    printf("%.3lf\n", y * 1.0 / n);
    printf("%.3lf\n", z * 1.0 / n);
    return 0;
}