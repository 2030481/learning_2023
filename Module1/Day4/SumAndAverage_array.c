#include <stdio.h>
int average(int n, int arr[]){
    
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int average = sum/n;
    return average;
    
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < sizeof(arr); i++){
        scanf("%d", &arr[i]);
    }
    int avg = average(5, arr);
    printf("%d", avg);
}