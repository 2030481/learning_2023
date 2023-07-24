/*
write a program in c language 
•Create an Arrav of N elements
• Write a function to find Second Minimum in a Array
• Write a function to find Second Maximum in a Array
• Write a function to Sort the Array in the given order.
*/
#include <stdio.h>

// Function to create an array of N elements
void create_array(int arr[], int N) {
    printf("Enter %d elements for the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to find the second minimum in an array
int find_second_minimum(int arr[], int N) {
    if (N < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int min1 = arr[0];
    int min2 = arr[1];

    for (int i = 2; i < N; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    return min2;
}

// Function to find the second maximum in an array
int find_second_maximum(int arr[], int N) {
    if (N < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int max1 = arr[0];
    int max2 = arr[1];

    for (int i = 2; i < N; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    return max2;
}

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array in ascending order using bubble sort
void sort_array(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int my_array[N];

    create_array(my_array, N);

    int second_min = find_second_minimum(my_array, N);
    if (second_min != -1) {
        printf("Second Minimum: %d\n", second_min);
    }

    int second_max = find_second_maximum(my_array, N);
    if (second_max != -1) {
        printf("Second Maximum: %d\n", second_max);
    }

    // Sort the array in ascending order
    sort_array(my_array, N);

    printf("Sorted Array in ascending order: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}
