#include <stdio.h>

int main() {

    int i, j, n, temp, min, loc;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array values:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        min = arr[i];
        loc = i;

        for(j = i+1; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                loc = j;
            }
        }

        if(loc != i) {
            temp = arr[i];
            arr[i] = arr[loc];
            arr[loc] = temp;
        }
    }

    printf("The sorted array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
