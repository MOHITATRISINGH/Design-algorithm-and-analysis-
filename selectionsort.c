08.13 07:03
#include <stdio.h>  
  
void selectionSort(int array[], int size)  
{  
    int x, y, minIndex;  
      
    for (x = 0; x < size-1; x++)    
    {  
        minIndex = x; 
          
        for (y = x+1; y < size; y++)  
        if (array[y] < array[minIndex])  
            minIndex = y;  

    int temp = array[minIndex];  
    array[minIndex] = array[x];  
    array[x] = temp;  
    }  
}  
  
void printArray(int arr[], int size) 
{  
    int z;  
    for (z = 0; z < size; z++)  
        printf("%d ", arr[z]);  
}  
  
int main()  
{  
    int arr[] = { 12, 31, 25, 8, 32, 17 };  
    int size = sizeof(arr) / sizeof(arr[0]);  
    printf("Before sorting, array elements are - \n");  
    printArray(arr, size);  
    selectionSort(arr, size);  
    printf("\nAfter sorting, array elements are - \n");    
    printArray(arr, size);  
    return 0;  
}  

