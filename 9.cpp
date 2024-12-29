// Question 9: Create a Class for Matrix Operations
// Problem: Implement a class `Matrix` with member functions for addition, subtraction, and multiplication of
// matrices. Use proper constructors to initialize the matrices.
// Input Example:
// Matrix A:
// 1 2
// 3 4
// Matrix B:
// 5 6
// 7 8
// Output Example:
// Matrix Addition Result:
// 6 8
// 10 12
#include <iostream>
using namespace std;

class Matrix
{
public:
    int mat[2][2];

    // takes the input of the matrix
    void input()
    {
        cout << "Enter 4 elements of the matrix (row-wise): " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    // display the matrix
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // add two matrix
    Matrix add(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    // subtract two matrix
    Matrix subtract(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }
        return result;
    }

    // multiply two matrix
    Matrix multiply(Matrix other)
    {
        Matrix result;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result.mat[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }
};

int main()
{
    Matrix A, B;

    cout << "Input Matrix A:" << endl;
    A.input();

    cout << "Input Matrix B:" << endl;
    B.input();

    cout << "Matrix A:" << endl;
    A.display();

    cout << "Matrix B:" << endl;
    B.display();

    // addition
    Matrix resultAdd = A.add(B);
    cout << "Matrix Addition Result:" << endl;
    resultAdd.display();

    // subtraction
    Matrix resultSubtract = A.subtract(B);
    cout << "Matrix Subtraction Result:" << endl;
    resultSubtract.display();

    // multiplication
    Matrix resultMultiply = A.multiply(B);
    cout << "Matrix Multiplication Result:" << endl;
    resultMultiply.display();

    return 0;
}