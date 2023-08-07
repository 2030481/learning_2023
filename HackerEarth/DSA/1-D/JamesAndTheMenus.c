#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define pcx putchar_unlocked
#define gcx getchar_unlocked
typedef int32_t ichar;
typedef int_fast64_t fint;
 
static inline fint getfi() {
  ichar c = gcx();
  while (!isdigit(c)) c = gcx();
  fint n = 0;
  while (isdigit(c)) {
    n = n * 10 + c - '0';
    c = gcx();
  }
  return n;
}
static inline void putfi(fint n, char lc) {
  if (0 == n) {
    pcx('0');
    if (lc) pcx(lc);
    return;
  }
  char s[24];
  fint rdi = 0;
  while (n) {
    s[rdi++] = '0' + n % 10;
    n /= 10;
  }
  while (rdi) pcx(s[--rdi]);
  if (lc) pcx(lc);
}
 
int main() {
  fint NM = getfi(); 
  fint NI = getfi(); 
  int PM[NM][NI];
  int MP[1000] = {
    0
  };
  float MA[1000] = {
    0
  }; 
 
  for (fint mi = 0; mi < NM; ++mi) {
    for (fint ii = 0; ii < NI; ++ii) {
      PM[mi][ii] = (int) getfi();
      if (PM[mi][ii] > MP[ii]) MP[ii] = PM[mi][ii];
      MA[mi] += PM[mi][ii];
    }
    MA[mi] /= NI;
  }
  int RMP[1000] = {
    0
  }; 
  int bestMenuScore = 0;
  float bestMenuAvg = 0;
  int ans = 0;
  for (fint mi = 0; mi < NM; ++mi) {
    for (fint ii = 0; ii < NI; ++ii) {
      if (PM[mi][ii] == MP[ii])
        ++RMP[mi];
    }
    if ((RMP[mi] > bestMenuScore) ||
      ((RMP[mi] == bestMenuScore) && (MA[mi] > bestMenuAvg))) {
      bestMenuScore = RMP[mi];
      bestMenuAvg = MA[mi];
      ans = mi + 1;
    }
  }
  putfi(ans, 0);
  return 0;
}