// Question 4: CRUD Operations using Class and Object
// Problem: Implement a class `Student` with attributes `id`, `name`, and `marks`. Write functions to perform
// CRUD (Create, Read, Update, Delete) operations on `Student` objects.
// Input Example:
// Add: {id: 1, name: "John", marks: 85}
// Update: id = 1, marks = 90
// Output Example:
// Updated Details: {id: 1, name: "John", marks: 90}

#include <iostream>
#include <string>
using namespace std;
class student
{

public:
    int id;
    string name;
    int marks;

    void set_value()
    {
        cout << "Enter Student Id..." << endl;
        cin >> this->id;
        cout << "Enter Student Name..." << endl;
        cin >> this->name;
        cout << "Enter Total Marks..." << endl;
        cin >> this->marks;
    }

    void show_detail()
    {
        cout << "Student Id Is..." << this->id << endl;
        cout << "Student Name Is..." << this->name << endl;
        cout << "Student Total Marks..." << this->marks << endl;
    }
};

int main()
{
    int user;
    int user_update, update_marks;
    string update_name;

    student stu[10000];
    int count = 0;

    do
    {

        cout << "1 For Insert Student..." << endl;
        cout << "2 For View Student..." << endl;
        cout << "3 For Update Student Data..." << endl;
        cout << "4 For Delete Student Data..." << endl;
        cin >> user;

        switch (user)
        {
        case 1:
            cout << "1 For Insert Student..." << endl;
            cout << "--------------------------------" << endl;

            stu[count].set_value();
            cout << "--------------------------------" << endl;
            stu[count].show_detail();
            cout << "--------------------------------" << endl;
            cout << "Data SuccessFully Update..." << endl;
            cout << "--------------------------------" << endl;

            count++;
            break;
        case 2:
            cout << "2 For View Student..." << endl;
            cout << "--------------------------------" << endl;
            int user_view;
            cout << "Enter Student Id Number To Show Detail..." << endl;
            cin >> user_view;

            cout << "--------------------------------" << endl;
            stu[user_view].show_detail();
            cout << "--------------------------------" << endl;

            cout << "--------------------------------" << endl;
            break;
        case 3:
            cout << "3 For Update Student Data..." << endl;
            cout << "--------------------------------" << endl;

            cout << "Enter Id To Update Data Link Name and Total Marks...." << endl;
            cin >> user_update;

            cout << "Enter Update Student Name..." << endl;
            cin >> update_name;

            cout << "Enter Update Student Marks..." << endl;
            cin >> update_marks;

            stu[user_update].name = update_name;
            stu[user_update].marks = update_marks;

            cout << "--------------------------------" << endl;
            stu[user_update].show_detail();
            cout << "--------------------------------" << endl;
            cout << "Data Successfully Update..." << endl;
            cout << "--------------------------------" << endl;

            break;
        case 4:
            int user_delete;
            cout << "4 For Delete  Student Data..." << endl;
            cout << "--------------------------------" << endl;
            cout << "Enter Id To Delete Student Data..." << endl;
            cin >> user_delete;
            cout << "--------------------------------" << endl;
            cout << "Student Data Delete Successfully Delete..." << endl;

            cout << "--------------------------------" << endl;

            break;

        default:
            cout << "Choose Right Option...." << endl;
            cout << "--------------------------------" << endl;
            break;
        }

    } while (user != 0);
}