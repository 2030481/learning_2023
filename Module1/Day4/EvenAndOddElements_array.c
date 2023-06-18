#include <stdio.h>
int differenceBetweenEvenAndOddElements(int n, int arr[]){
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even += arr[i];
        }
        else{
            odd += arr[i];
        }
    }
    return (even > odd)? (even-odd):(odd-even);
}
int main(){
    int n;
    printf("Enter size of Array");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int diff = differenceBetweenEvenAndOddElements(n, arr);
    printf("The difference is %d", diff);
    return 0;
}