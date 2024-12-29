// Question 5: Use of Constructors in C++
// Problem: Implement a class `Rectangle` with attributes `length` and `breadth`. Use a parameterized
// constructor to initialize the attributes and calculate the area of the rectangle.
// Input Example:
// Length: 5, Breadth: 10
// Output Example:
// Area: 50
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    int Area() {
        return length * breadth;
    }
};

int main() {
    int length, breadth;


    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;


    Rectangle a(length, breadth);


    int area = a.Area();
    cout << "Area of the rectangle: " << area << endl;


}