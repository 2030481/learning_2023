
/*Probem hackerearth DSA 1-D problem set*/
#include <stdio.h>

int res[10];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        int arr[10] = {0}, x;
        scanf("%d", &x);

        for (; x; x /= 10) {
            arr[x % 10] = 1;
        }

        for (int j = 0; j < 10; ++j) {
            res[j] += arr[j];
        }
    }

    int max_value = res[0];
    for (int i = 1; i < 10; ++i) {
        if (res[i] > max_value) {
            max_value = res[i];
        }
    }

    printf("%d\n", max_value);
    return 0;
}