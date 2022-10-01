#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int temp, temp2;
    // int i = 1;
    for (int i = 1; i < size; i++)
    {
        // int j = i - 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if ((j == 0 && arr[i] < arr[j]) || ((j != 0) && (arr[i] < arr[j] && arr[i] >= arr[j - 1])))
            {
                // Shifting elements
                temp = arr[i];
                for (int k = i - 1; k >= j; k--)
                {
                    arr[k + 1] = arr[k];
                }
                arr[j] = temp;
                // for (int z = 0; z < size; z++) {
                //     cout << arr[z] << " ";
                // }
                // cout << endl;
                break;
            }
        }
    }
}

int main()
{
    int size;
    cin >> size;
    int *input = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    insertionSort(input, size);

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
    cout << endl;

    return 0;
}