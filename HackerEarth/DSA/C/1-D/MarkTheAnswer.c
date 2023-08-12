#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int MX = 1e5;

int main() {
    int* arr;
    int n, k, res = 0;
    bool flag = false;

    scanf("%d%d", &n, &k);

    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] <= k)
            res++;
        else {
            if (flag)
                break;
            flag = true;
        }
    }

    free(arr);

    printf("%d", res);
    return 0;
}