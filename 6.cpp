// Question 6: Sort an Array using Merge Sort
// Problem: Write a program to sort an array using the merge sort algorithm.
// Input Example:
// Input: [38, 27, 43, 3, 9]
// Output Example:
// Output: [3, 9, 27, 38, 43]
#include <iostream>
#include <vector>

using namespace std;

void merge(int start, int mid, int end, int arr[])
{

    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            left++, index++;
        }
        else
        {
            temp[index] = arr[right];
            right++, index++;
        }
    }

    while (left <= mid)
    {
        temp[index] = arr[left];
        left++, index++;
    }
    while (right <= end)
    {
        temp[index] = arr[right];
        right++, index++;
    }

    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        start++, index++;
    }
}
void mergeSort(int start, int end, int arr[])
{

    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(start, mid, arr);
    mergeSort(mid + 1, end, arr);

    merge(start, mid, end, arr);
}

int main()
{

    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the arr[" << i << "]";
        cin >> arr[i];
    }

    mergeSort(0, size-1, arr);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
}