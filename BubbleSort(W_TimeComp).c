#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubblesort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++) {  
        swapped = false;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
	int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int n;
    int i;
    clock_t t;
    
    printf("Enter number of Elements to be used in array");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
    	printf("Enter element");
    	scanf("%d", &arr[i]);
	}
    
    t=clock();

    printf("Original array: ");
    printArray(arr, n);

    bubblesort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; 
    
    printf("Execution time is: %f", time_taken);

    return 0;
}

