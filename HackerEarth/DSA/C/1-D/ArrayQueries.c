#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
unsigned long long totalA = 0, totalB = 0, sumA = 0, sumB = 0;
 
static inline void computeConstants(long N, long M, int *A, int *B) {
    totalA = 0;
    totalB = 0;
    sumA = 0;
    sumB = 0;
 
    for (long i = 0; i < N; i++) {
        unsigned long long val = A[i];
        totalA += val;
        sumA += val * (i + 1);
    }
 
    for (long i = 0; i < M; i++) {
        unsigned long long val = B[i];
        totalB += val;
        sumB += val * (i + 1);
    }
}
 
static inline unsigned long long computeSum() {
    return ((totalA % 998244353) * (sumB % 998244353) + (sumA % 998244353) * (totalB % 998244353)) % 998244353;
}
 
static inline void updateConstants(long a_op, long b_op, long c_op, long d_op) {
    totalA += a_op;
    totalB += b_op;
    sumA += c_op;
    sumB += d_op;
}
 
static inline void performAction(int action, long i, long j, int *A, int *B) {
    switch (action) {
        case 1: {
            long tmp = A[i - 1];
            A[i - 1] = B[j - 1];
            updateConstants(-tmp, -B[j - 1], -tmp * i, -B[j - 1] * j);
            B[j - 1] = tmp;
            updateConstants(A[i - 1], B[j - 1], A[i - 1] * i, B[j - 1] * j);
            break;
        }
        
        case 2: {
            long tmp = A[i - 1];
            A[i - 1] = A[j - 1];
            updateConstants(-tmp, 0, -tmp * i, 0);
            updateConstants(-A[j - 1], 0, -A[j - 1] * j, 0);
            A[j - 1] = tmp;
            updateConstants(A[i - 1], 0, A[i - 1] * i, 0);
            updateConstants(A[j - 1], 0, A[j - 1] * j, 0);
            break;
        }
 
        case 3: {
            long tmp = B[i - 1];
            B[i - 1] = B[j - 1];
            updateConstants(0, -tmp, 0, -tmp * i);
            updateConstants(0, -B[j - 1], 0, -B[j - 1] * j);
            B[j - 1] = tmp;
            updateConstants(0, B[i - 1], 0, B[i - 1] * i);
            updateConstants(0, B[j - 1], 0, B[j - 1] * j);
            break;
        }
    }
}
 
unsigned long long* arrayQueries(int N, int M, int* A, int* B, int Q, int** queries, int* out_n) {
 
    if (N < 0 || N > 100000 || M < 0 || M > 100000 || Q < 1 || Q > 100000) {
        *out_n = 0;
        return NULL;
    }
 
    *out_n = Q + 1;
 
    unsigned long long *result = (unsigned long long*)malloc((*out_n) * sizeof(unsigned long long));
    computeConstants(N, M, A, B);
    result[0] = computeSum();
 
    for (int r = 0; r < Q; r++) {
        int *query = queries[r];
        int q_type = *query;
        int a_index = *(query + 1);
        int b_index = *(query + 2);
 
        performAction(q_type, a_index, b_index, A, B);
        result[r + 1] = computeSum();
    }
 
    return result;
}
 
int main() {
    int out_n;
    int T;
    scanf("%d", &T);
    for (int t_i = 0; t_i < T; t_i++) {
        int N;
        scanf("%d", &N);
        int M;
        scanf("%d", &M);
        int i_A;
        int *A = (int *)malloc(sizeof(int) * N);
        for (i_A = 0; i_A < N; i_A++)
            scanf("%d", &A[i_A]);
        int i_B;
        int *B = (int *)malloc(sizeof(int) * M);
        for (i_B = 0; i_B < M; i_B++)
            scanf("%d", &B[i_B]);
        int Q;
        scanf("%d", &Q);
        int i_queries, j_queries;
        int **queries = (int **)malloc(Q * sizeof(int *));
        for (i_queries = 0; i_queries < Q; i_queries++) {
            queries[i_queries] = (int *)malloc(3 * sizeof(int));
        }
        for (i_queries = 0; i_queries < Q; i_queries++) {
            for (j_queries = 0; j_queries < 3; j_queries++) {
                scanf("%d", &queries[i_queries][j_queries]);
            }
        }
 
        unsigned long long* out_ = arrayQueries(N, M, A, B, Q, queries, &out_n);
        printf("%llu", out_[0]);
        for (int i_out_ = 1; i_out_ < out_n; i_out_++) {
            printf(" %llu", out_[i_out_]);
        }
        free(out_);
        free(queries);
        printf("\n");
    }
}