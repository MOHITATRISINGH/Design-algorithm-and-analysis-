08.13 06:59
#include <stdio.h>  
  
void bubbleSort(int numbers[], int size) {  
  int x, y;  
  for (x = 0; x < size - 1; x++) {  
    for (y = 0; y < size - x - 1; y++) {  
      if (numbers[y] > numbers[y + 1]) {  
        int swap = numbers[y];  
        numbers[y] = numbers[y + 1];  
        numbers[y + 1] = swap;  
      }  
    }  
  }  
}  
  
int main() {  
  int numbers[] = {64, 34, 25, 12, 22, 11, 90};  
  int size = sizeof(numbers) / sizeof(numbers[0]);  
  bubbleSort(numbers, size);  
  printf("Sorted array: ");  
  for (int z = 0; z < size; z++) {  
    printf("%d ", numbers[z]);  
  }  
  return 0;  
}  

