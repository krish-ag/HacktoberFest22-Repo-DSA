#include <bits/stdc++.h>
using namespace std;
 
void sort(int num[], int len);
void swapNums(int nums[],
              int first, int second);
 
// Driver code
int main()
{
    // Initializing arrya
    int nums[] = {1, 12, 6, 8, 10};
    int size_nums = (sizeof(nums) /
                     sizeof(nums[0]));
 
    cout << "Before sorting the array is: \n";
    for (int i = 0; i < size_nums; i++)
        cout << nums[i] << " ";
    cout << "\n\n";
 
    sort(nums, size_nums);
 
    cout << "After sorting the array is: \n";
 
    for (int i = 0; i < size_nums; i++)
        cout << nums[i] << " ";
    cout << "\n";
    return 0;
}
 
// Sort function
void sort(int num[], int len)
{
    bool isSwapped;
  
    for (int i = 0; i < len; i++)
    {
        isSwapped = false;
        for (int j = 1; j < len - i; j++)
        {
            if (num[j] < num[j - 1])
            {
                swapNums(num, j, (j - 1));
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
        }
    }
}
 
// Swaps two numbers in array
void swapNums(int nums[],
              int first, int second)
{
    int curr = nums[first];
    nums[first] = nums[second];
    nums[second] = curr;
}
