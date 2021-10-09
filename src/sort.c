#include "sort.h"

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void insertion_sort(int arr_len, int *arr) {
    for(int i = 1; i < arr_len; i++) {
        int aux = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > aux) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = aux;
    }
    return;
}

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void shell_sort( int arr_len, int *arr ) {
    return;
}

/**
 * function: insertion_sort
 * Insertion sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void merge_sort( int arr_len, int *arr ) {
    return;
}

/**
 * function: quick_sort
 * Quick sort implementation
 * @param low, Array inferior bound. On function call: (low = 0) 
 * @param high, Array superior bound
 * @param array, Integer array reference
 */
void quick_sort(int low, int high, int *arr) {
    return;
}

/**
 * function: bucket_sort
 * Bucket sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void bucket_sort( int arr_len, int *arr ) {
    return;
}

/**
 * function: quick_sort
 * Counting sort implementation
 * @param arr_len, Array length
 * @param array, Integer array reference
 */
void counting_sort( int arr_len, int *arr ) {
    return;
}
