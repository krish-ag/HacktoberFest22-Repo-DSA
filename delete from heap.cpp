#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteheap(int arr[], int size)
{
    int lastnode = arr[size - 1];
    size = size - 1;
    arr[0] = lastnode;

    int leftchild, rightchild;

    int i = 0;
    while (i < size)
    {

        leftchild = 2 * i + 1;
        rightchild = 2 * i + 2;

        if (leftchild < size && rightchild < size)
        {
            if (arr[i] < arr[leftchild] && arr[i] > arr[rightchild])
            {
                swap(arr[i], arr[leftchild]);
                i = leftchild;
            }
            else if (arr[i] > arr[leftchild] && arr[i] < arr[rightchild])
            {
                swap(arr[i], arr[rightchild]);
                i = rightchild;
            }
            else if (arr[i] < arr[leftchild] && arr[i] < arr[rightchild])
            {
                if (arr[leftchild] > arr[rightchild])
                {
                    swap(arr[i], arr[leftchild]);
                    i = leftchild;
                }
                else
                {
                    swap(arr[i], arr[rightchild]);
                    i = rightchild;
                }
            }
            else
            {
                display(arr, size);
                return;
            }
        }
        else
        {
            display(arr, size);
            return;
        }
    }
}

int main()
{


    int arr[] = {40, 35, 30, 15, 10, 25, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Displaying orignal heap: " << endl;
    display(arr, size);

    cout << "After deleting root node: " << endl;
    deleteheap(arr, size);
    return 0;
}
