#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i, j, arr[1000], temp, n;

void Selection_sort(int arr[], int n) {
	
    for (i = 0; i < n - 1; i++) {  
        int min_index = i;
        for (j = i + 1; j < n; j++) {  
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void print_arr(int arr[], int n) { 
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void make_array(int arr[], int n) {  
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);  
    }
}

int main() {
    int n;
    clock_t t;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n]; 

    make_array(arr, n);  
    printf("Original Array: ");
    print_arr(arr, n);  
	t=clock();
    Selection_sort(arr, n);
	t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC;   
    printf("Sorted Array: ");
    print_arr(arr, n);
	printf("Execution time is: %f", time_taken);  

    return 0;  
}

