#include <iostream>
using namespace std;

class Matrix 
{
private:
    int size;   
    int* elements; 

public:
    Matrix(int s) : size(s) 
	{
        elements = new int[size];
    }

    ~Matrix()
	{
        delete[] elements;
    }

    Matrix operator+(const Matrix& mat)
	{
        if (size != mat.size) 
		{
            cerr << "Matrix sizes do not match for addition." << endl;
            return Matrix(0);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) 
		{
            result.elements[i] = elements[i] + mat.elements[i];
        }
        return result;
    }
    void setElements(int* arr) 
	{
        for (int i = 0; i < size; ++i) 
		{
            elements[i] = arr[i];
        }
    }

    void display() const 
	{
        cout << "Matrix Elements:" << endl;
        for (int i = 0; i < size; ++i) 
		{
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    const int size = 5;

    Matrix mat1(size);
    Matrix mat2(size);

    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {6, 7, 8, 9, 10};

    mat1.setElements(arr1);
    mat2.setElements(arr2);

    cout<<"Matrix 1:"<<endl;
    mat1.display();
    cout<<"Matrix 2:"<<endl;
    mat2.display();

    Matrix mat3 = mat1 + mat2;

    cout<<"Result of Matrix Addition:"<<endl;
    mat3.display();

    return 0;
}

