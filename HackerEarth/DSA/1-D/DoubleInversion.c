#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define pcx putchar_unlocked
#define gcx getchar_unlocked
 
typedef int32_t ichar; 
typedef int_fast64_t fint; 
 
static inline fint getfi () {
    ichar c = gcx();
    while (!isdigit (c)) c = gcx();
    fint n = 0;
    while (isdigit (c)) {
        n = n * 10 + c - '0';
        c = gcx();
    }
    return n;
}
static inline void putfi (fint n, char lc) {
    if (0 == n) {
        pcx ('0');
        if (lc) pcx (lc);
        return;
    }
    char s[24];
    fint rdi = 0;
    while (n) {
        s[rdi++] = '0' + n % 10;
        n /= 10;
    }
    while (rdi) pcx (s[--rdi]);
    if (lc) pcx (lc);
}
static inline fint min2 (fint A, fint B) {
    return (A < B ? A : B);
}
 
int main () {
    fint A [100000];
    fint R [100000];
    fint T = getfi() + 1;
    while (--T) {
        fint N = getfi();
        for (fint ai = 0; ai < N; )
            A[ai++] = N - getfi();
        for (fint ri = N-1; ri >=0; )
            R[ri--] = N - getfi();
        char nlt[100008] = {0};
        fint exit = 0;
        for (fint ai = 0; ai < N; ++ai) {
            A[ai] = A[ai] + R[ai] - N;
            if (A[ai] < 1 || A[ai] > N) {
                exit = 1; break;
            }
            if (nlt[A[ai]]){exit = 1; break;}
            else nlt[A[ai]] = 1;
        }
        if (exit) {pcx('-'); pcx('1'); pcx('\n'); continue; }
        for (fint ai =0; ai < N; )
            putfi(A[ai++], ' ');
        pcx('\n');
    }
    return 0;
}