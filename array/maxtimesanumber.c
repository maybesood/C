#include<stdio.h>
#define ARRAY_SIZE 100
 
void Element(int *a, int size) {
 int i, Index = 0, count = 1;
    for(i = 1; i < size; i++) {
        if(a[Index] == a[i])
            count++;
        else
            count--;
         
        if(count == 0) {
            Index = i;
            count = 1;
        }
    }
    count = 0;
    for (i = 0; i < size; i++) { if(a[i] == a[Index]) count++; } if(count > (size/2))
        printf("%d\n", a[Index]);
    else
        printf("No Majority Element Found\n");
}
 
int main(){
    int i, array[ARRAY_SIZE], count, sum;
    
    scanf("%d", &count);
     
    
    for(i = 0; i < count; i++){
 scanf("%d", &array[i]);
    } 
  
    Element(array, count);
 
    return 0;
}