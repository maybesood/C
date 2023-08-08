#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // sort the array
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("The highest number is %d\n", arr[n-1]);

    // calculate frequency of highest number
    count = 0;
    for(i = 0; i < n; i++) {
        if (arr[i] == arr[n-1]) {
            count++;
        }
    }
    printf("%d is occurring %d times\n", arr[n-1], count);

    return 0;
}

