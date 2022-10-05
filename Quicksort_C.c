#include<stdio.h>
  
void swap(int* x, int* y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
int partition (int array[], int low, int high) 
{ 
    
    int pivot = array[high];    
    int swapIndex  = (low - 1);   //swapping index
  
    for (int j = low; j <= high- 1; j++) 
    { 
        
        if (array[j] < pivot) 
        { 
            swapIndex ++;    
            swap(&array[swapIndex], &array[j]); 
        } 
    } 
    swap(&array[swapIndex + 1], &array[high]); 
    return (swapIndex + 1); 
} 
  
void quickSort(int array[], int low, int high) 
{ 
    if (low < high) 
    { 
       
        int indexPI  = partition(array, low, high); 
  
        quickSort(array, low, indexPI  - 1);  // left partition
        quickSort(array, indexPI  + 1, high); // right partition
    } 
} 
  
void display(int array[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", array[i]); 
} 
  
int main() 
{ 
    int array[] = {70, 90, 10, 30, 50, 20, 60}; 
    int size = sizeof(array)/sizeof(array[0]); 
    quickSort(array, 0, size-1); 
    printf("Array after Quick Sorting: "); 
    display(array, size); 
    return 0; 
}
