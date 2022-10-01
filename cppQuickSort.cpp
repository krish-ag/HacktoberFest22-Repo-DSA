#include <bits/stdc++.h>
using namespace std;
 
void quickSort(int nums[],
               int low, int high);
 
// Driver code
int main()
{
    int nums[] = {1, 6, 3, 10, 50};
    int size_nums = (sizeof(nums) /
                     sizeof(nums[0]));
    
    cout << "Before sorting array is: \n";
    for (int i = 0; i < size_nums; i++)
        cout << nums[i] << " ";
    cout << "\n\n";
 
    quickSort(nums, 0, size_nums - 1);
 
    cout << "After sorting array is: \n";
 
    for (int i = 0; i < size_nums; i++)
        cout << nums[i] << " ";
    cout << "\n";
    return 0;
}
 

void quickSort(int nums[],
               int low, int high)
{
    // Base Condition
    if (low >= high)
        return;
 
    // These are just for swapping
    // the elements.
    int start = low, end = high;
    int mid = start + ((end - start) / 2);
    int pivot = nums[mid];
 
    while (start <= end) {
        while (nums[start] < nums[end])
            start++;
        while (nums[end] > pivot)
            end--;
        if (start <= end)
        {
            // Swapping the start and end
            // elements.
            int x = nums[start];
            nums[start] = nums[end];
            nums[end] = x;
            start++;
            end--;
        }
    }
    quickSort(nums, low, end);
    quickSort(nums, start, high);
}
