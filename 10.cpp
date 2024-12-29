// Question 10: Create a To-Do List Application using Class
// Problem: Implement a class `ToDoList` that supports adding tasks, viewing all tasks, marking a task as
// completed, and deleting tasks. Use a vector to store tasks.
// Input Example:
// Add: "Complete assignment", "Attend meeting"
// Mark Complete: 1
// Output Example:
// Remaining Tasks: "Attend meeting"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> v1;
    int user=-1;
     string input;
    int index;
    string value;
    do
    {
        cout << "________________________________" << endl;
        cout << "enter 1 for adding the task " << endl;

        cout << "enter 2 for viewing the tasks" << endl;

        cout << "enter 3 for modifing the task" << endl;

        cout << "enter 4 for deleting the task" << endl;
        cout << "enter 0 for exiting" << endl;
        cout << "________________________________" << endl;
        cin >> user;
                   cin.ignore(); 


        switch (user)
        {
        case 1:
             cout << "Enter the task: ";

            getline(cin, input);
            v1.push_back(input);

            cout <<endl<< "Task added successfully!" << endl;

            break;
        case 2:
            cout << "List of tasks: "<<endl;

            for (string v2 : v1)
            {
                cout << v2 << " " << endl;
            }

            break;
        case 3:

            cout << "enter index for modifing the task :" << endl;
            cin >> index;
            cin.ignore(); 

            cout << "enter value to modify the task :" << endl;
            getline(cin, value);
            v1[index] = value;
            cout << "Updated tasks: "<< endl;

            for (string v2 : v1)
            {
                cout << v2 << " " << endl;
            }

            break;
        case 4:
            cout << "for deleting the task enter the index of task" << endl;

            cin >> index;
            cin.ignore(); 

            v1.erase(v1.begin() + index);

            cout << "Element deleted. Updated tasks: "<< endl;
            cout << "List of tasks: "<< endl;
            for (string v2 : v1)
            {
                cout << v2 << " " << endl;
            }
            break;

        default:
            break;
        }
        cout << endl
             << "________________________________" << endl;
        
    } while (user != 0);
}