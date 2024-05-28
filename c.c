#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[30], n, i;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++)
    {
        printf("\nThe value of a[%d] is : ",i);
        scanf("%d",&arr[i]);
    }
    // sort the array
    sort(arr, n);
    // print the sorted array
    printf("The sorted array is : ");
    for (i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}