#include <stdio.h>

int main() {
    int n, x, p = 0, res = 1;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &x);
        if (x < p)
            res++;
        p = x;
    }

    printf("%d", res);
    return 0;
}