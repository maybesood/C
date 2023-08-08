#include <stdio.h>

typedef struct Array {
    int arr[5];
} Array;

void increment(Array *newArr, int n) {
    for (int i = 0; i < n; i++) {
        newArr->arr[i]++;
        printf("%d\t", newArr->arr[i]);
    }
}

void print(Array var, int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", var.arr[i]);
    }
}

int main() {
    Array newArr;
    newArr.arr[0] = 10;
    newArr.arr[1] = 20;
    newArr.arr[2] = 30;
    newArr.arr[3] = 40;
    newArr.arr[4] = 50;

    increment(&newArr, 5);
    print(newArr, 5);

    return 0;
}
