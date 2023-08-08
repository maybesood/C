#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }
    printf("The array with duplicate elements removed is: ");
    for(i = 0; i < n; i++) {
        if(arr[i] != -1) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
