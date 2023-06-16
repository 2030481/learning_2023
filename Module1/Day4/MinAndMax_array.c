/*

*/
#include <stdio.h>
int min(int n, int arr[]){
    int smallest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int max(int n, int arr[]){
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int smallest = min(n, arr);
    int largest = max(n, arr);
    printf("Minimum is %d\n", smallest);
    printf("Maximum is %d", largest);
}