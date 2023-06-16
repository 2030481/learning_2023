#include <stdio.h>

void reverse(int n, int arr[]){
    if(n % 2 == 0){
        int i = 0;
        int j = n-1;
        while(i < (n/2)){
            int temp =  arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    else{
        int i = 0;
        int j = n-1;
        while(i < (n/2)){
            int temp =  arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int n;
    printf("Enter the size of Array\n");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    reverse(n, arr);
    return 0;
}