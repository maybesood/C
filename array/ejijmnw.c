#include <stdio.h>
int main() {
  int n;
  double arr[100];
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("%d", i + 1);
    scanf("%lf", &arr[i]);
  }  
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf(" %.2lf", arr[0]);

  return 0;
}