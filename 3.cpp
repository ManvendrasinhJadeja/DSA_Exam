// Question 3: Implement Stack using Array
// Problem: Create a stack using an array and perform the following operations: Push, Pop, and Display.
// Input Example:
// Push: 10, 20, 30
// Pop: 1 (Remove the top element)
// Output Example:
// Stack after operations: [10, 20]
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout << "Top of stack: " << stk.top() << endl;

    stk.pop();

    cout << "Top after pop: " << stk.top() << endl;

    return 0;
}