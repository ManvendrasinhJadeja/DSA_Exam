// Question 7: Working with Vectors in C++
// Problem: Write a program to demonstrate the use of vectors. Perform the following operations: Add
// elements, access elements, modify elements, and delete an element from the vector.
// Input Example:
// Add: [10, 20, 30, 40], Remove: 30
// Output Example:
// Updated Vector: [10, 20, 40]
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int user;
    vector<int> v1;
    do
    {
        cout << "________________________________" << endl;
        cout << "enter 1 for adding the element in the vector" << endl;

        cout << "enter 2 for accessing the element in the vector" << endl;

        cout << "enter 3 for modifing the element in the vector" << endl;

        cout << "enter 4 for deleting the element in the vector" << endl;

        int input;
        switch (user)
        {
        case 1:
            cout << "enter the element in the vector" << endl;
            cin >> input;
            v1.push_back(input);
            for (int v2 : v1)
            {
                cout << v2 << " ";
            }
            break;
        case 2:
            cout << "printing the vector" << endl;

            for (int v2 : v1)
            {
                cout << v2 << " ";
            }

            break;
        case 3:
            int input;
            int value;
            cout << "enter index for modifing the element in the vector" << endl;
            cin >> input;
            cout << "enter value to modify the element in the vector" << endl;
            cin >> value;

            v1[input] = value;

            for (int v2 : v1)
            {
                cout << v2 << " ";
            }

            break;
        case 4:
            cout << "for deleting the element in the vector" << endl;
            v1.pop_back();
            for (int v2 : v1)
            {
                cout << v2 << " ";
            }
            break;

        default:
            break;
        }
        cout << "________________________________" << endl;
        cin >> user;
    } while (user != 0);
}