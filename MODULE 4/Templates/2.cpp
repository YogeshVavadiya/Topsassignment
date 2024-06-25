#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
	{
        for (int j = 0; j < size - 1 - i; ++j) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void printArray(const T arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Original integer array: ";
    printArray(intArray, intSize);

    sortArray(intArray, intSize);

    cout << "Sorted integer array: ";
    printArray(intArray, intSize);

    double doubleArray[] = {3.1, 4.1, 5.9, 2.6, 5.3};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "Original double array: ";
    printArray(doubleArray, doubleSize);

    sortArray(doubleArray, doubleSize);

    cout << "Sorted double array: ";
    printArray(doubleArray, doubleSize);

    char charArray[] = {'g', 'e', 'e', 'k', 's'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]);

    cout << "Original char array: ";
    printArray(charArray, charSize);

    sortArray(charArray, charSize);

    cout << "Sorted char array: ";
    printArray(charArray, charSize);

    return 0;
}

