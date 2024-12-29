// Question 1: Reverse an Array
// Problem: Write a function to reverse an array of integers.
// Input Example:
// Input: [1, 2, 3, 4, 5]
// Output Example:
// Output: [5, 4, 3, 2, 1]

#include <iostream>

using namespace std;

// Declring the revese function which reverses the array
void reverse(int n, int arr[])
{
    // creating new array
    int temp[n];

    // reversing the array and saving it into the new temp array
    for (int i = 0; i < n; i++)
    {
        temp[n - i - 1] = arr[i];
    }
    // adding the elements from the temp array to  original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    // printing the original array after reversing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
};

int main()
{
    // Create array and take size from user
    int n;
    cout << "enter the size of the array : ";
    cin >> n;
    int arr[n];

    // take elements from user for the each index of the array
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element  arr[" << i << "]";
        cin >> arr[i];
    }
    // calling the function reverse and passing the arguments
    reverse(n, arr);
}