#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isOverflow(unsigned long long a, unsigned long long b) 
{ 
    if (a == 0 || b == 0)  
        return false; 
    unsigned long long result=a*b; 
    if (a == result / b)   //
        return false; 
    else                    //
        return true; 
}
 
void insertArray(unsigned long *A, unsigned long N) 
{
    unsigned long i = 0;            //
    while(i < N)
    {   
        scanf("%lu", &A[i]);
        i++;                        //
    }
}
void main()
{
    unsigned short T;
    unsigned long N, M,divider = pow(10, 9) + 7;
    unsigned long long K;
    scanf("%hu", &T);
    while(T--)
    {
        scanf("%lu %lu %lu", &N, &M, &K);
        unsigned long long count = 0, overlap = 0, till = 0, elements = 0;
        unsigned long long sum = 0, sumArray = 0, right = 0;
        unsigned long A[N];
        unsigned long left = 0, j = 0;
        bool first = true, change = true, stop = true;
        insertArray(A,N);
        
        while(left < N){
            if(right < ((j + 1) * N)){
                if((sum + A[right - (j * N)]) <= K){
                    if((right - left) >= N){
                        if(stop){
                            sumArray = sum;
                            stop = false;
                        }
                        unsigned long jump = (K - sum) / sumArray;
                        if(jump > 0)
                        {
                            if((j + jump) < M){
                                right += (N * jump);
                                sum += (sumArray * jump);
                                j += jump;
                            }
                            else{
                                right = (M * N);
                                break;
                            }
                        }
                        else{
                            sum += A[right - (j * N)];
                            right++;
                        }
                    }
                    else{
                        sum += A[right - (j * N)];
                        right++;
                    }
                } 
                else{
                    if(left < right) 
                    {
                        if(right >= N) 
                        {
                            count += (N - left);
                            overlap += (right - N);
                            sum -= A[left];
                            left++;
                        }
                        else{
                            count += (right - left);
                            sum -= A[left];
                            left++;    
                        }
                    } 
                    else{
                        right++;
                        left++;
                    }
                    if(first){
                        elements += j * N;
                        first = false;
                    }
                }
            } 
            else{
                if((j + 1) < M) 
                {
                    if(!first && change)
                    {   till = overlap + count;
                        elements += (N - left);
                        change = false;
                    }
                    j++;
                } 
                else{
                    break;
                }
            }
        }
        if(right == (M * N)) 
        {
            elements = right - left;
            
            unsigned long long first, second;
            if((elements % 2) == 0) 
            {
                first = elements / 2;
                second = elements + 1;
            }
            else{
                first = elements;
                second = (elements + 1) / 2;
            }
            while(isOverflow(first, second))
            {
                first = first % divider;
                second = second % divider;
            }
            
            count = first * second;
            
            count = count % divider;
            printf("%llu\n", count);
        } 
        else 
        {
            if(right == (j * N))
                j--;
            
            if((right - left) >= N) 
            {
                unsigned long long tot;
                unsigned long long first, second;
                if(elements % 2 == 0) 
                {
                    first = (elements / 2);
                    second = (elements + 1);
                }
                else
                {
                    second = (elements + 1) / 2;
                    first = elements;
                }
                
                while(isOverflow(first, second))
                {
                    first = first % divider;
                    second = second % divider;
                }
                
                tot = first * second;
                tot = tot % divider;
                till = till % divider;
                count = ((M - j) * (overlap + count));
                count = count % divider;
                count += tot + till;
            } 
            else 
            {
                count = ((M - j) * overlap) + (M * count);
            }
            
            count = count % divider;
            printf("%llu\n", count);
        }
    }
    
}