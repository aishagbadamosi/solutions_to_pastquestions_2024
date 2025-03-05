#include <iostream>

using namespace std;



// Function to perform bubble sort

void bubbleSort(int* arr, int size) {

    for (int i = 0; i < size - 1; ++i) {

        for (int j = 0; j < size - i - 1; ++j) {

            if (*(arr + j) > *(arr + j + 1)) { // Compare adjacent elements

                // Swap elements using pointers

                int temp = *(arr + j);

                *(arr + j) = *(arr + j + 1);

                *(arr + j + 1) = temp;

            }

        }

    }

}



// Function to display the array

void displayArray(int* arr, int size) {

    for (int i = 0; i < size; ++i) {

        cout << *(arr + i) << " ";

    }

    cout << endl;

}



int main() {

    int n;

    cout << "Enter the number of elements in the array: ";

    cin >> n;



    int* arr = new int[n]; // Dynamically allocate array

    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; ++i) {

        cin >> *(arr + i);

    }



    cout << "Original array: ";

    displayArray(arr, n);



    bubbleSort(arr, n);



    cout << "Sorted array: ";

    displayArray(arr, n);



    delete[] arr; // Free allocated memory

    return 0;

}

















#include <iostream>

using namespace std;



// Function to compute the length of a string

int stringLength(const char* str) {

    int length = 0;

    while (*(str + length) != '\0') { // Traverse until null terminator

        length++;

    }

    return length;

}



int main() {

    char str[100];

    cout << "Enter a string: ";

    cin.getline(str, 100); // Read a string with spaces



    int length = stringLength(str);

    cout << "The length of the string is: " << length << endl;



    return 0;

}













#include <iostream>

using namespace std;



// Function to check if a number is even or odd

void checkEvenOdd(int* num) {

    if (*num % 2 == 0) {

        cout << *num << " is even." << endl;

    } else {

        cout << *num << " is odd." << endl;

    }

}



// Function to check if a number is positive or negative

void checkPositiveNegative(int* num) {

    if (*num > 0) {

        cout << *num << " is positive." << endl;

    } else if (*num < 0) {

        cout << *num << " is negative." << endl;

    } else {

        cout << *num << " is zero." << endl;

    }

}



int main() {

    int number;

    cout << "Enter a number: ";

    cin >> number;



    checkEvenOdd(&number);

    checkPositiveNegative(&number);



    return 0;

}





















#include <iostream>

using namespace std;



// Function to check if a number is prime

bool isPrime(int* num) {

    if (*num <= 1) return false; // 0 and 1 are not prime

    for (int i = 2; i * i <= *num; ++i) {

        if (*num % i == 0) return false; // Divisible by i means not prime

    }

    return true;

}



int main() {

    int number;

    cout << "Enter a number to check if it's prime: ";

    cin >> number;



    if (isPrime(&number)) {

        cout << number << " is a prime number." << endl;

    } else {

        cout << number << " is not a prime number." << endl;

    }



    return 0;

}





















#include <iostream>

using namespace std;



// Function to compute the sum of array elements

int sumArray(int* arr, int size) {

    int sum = 0;

    for (int i = 0; i < size; ++i) {

        sum += *(arr + i); // Accessing elements using pointer arithmetic

    }

    return sum;

}



int main() {

    int n;

    cout << "Enter the number of elements in the array: ";

    cin >> n;



    int* arr = new int[n]; // Dynamic array

    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; ++i) {

        cin >> arr[i];

    }



    int sum = sumArray(arr, n);

    cout << "The sum of the array elements is: " << sum << endl;



    delete[] arr; // Free dynamically allocated memory

    return 0;

}















#include <iostream>

using namespace std;



// Function to perform linear search

int linearSearch(int* arr, int size, int target) {

    for (int i = 0; i < size; ++i) {

        if (*(arr + i) == target) { // Compare the target value

            return i; // Return the index

        }

    }

    return -1; // Return -1 if target is not found

}



int main() {

    int n, target;



    cout << "Enter the number of elements in the array: ";

    cin >> n;



    int* arr = new int[n]; // Dynamically allocate array

    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; ++i) {

        cin >> *(arr + i);

    }



    cout << "Enter the target value to search for: ";

    cin >> target;



    int position = linearSearch(arr, n, target);



    if (position != -1) {

        cout << "Target value found at index: " << position << endl;

    } else {

        cout << "Target value not found in the array." << endl;

    }



    delete[] arr; // Free allocated memory

    return 0;

}











#include <iostream>

#include <cstring> // For string operations

using namespace std;



// Define the Student structure

struct Student {

    char name[50];

    int age;

    float totalMarks;

};



// Function to input data for a student

void inputStudentData(Student* student) {

    cout << "Enter name: ";

    cin.ignore(); // Ignore newline left in the input buffer

    cin.getline(student->name, 50);

    cout << "Enter age: ";

    cin >> student->age;

    cout << "Enter total marks: ";

    cin >> student->totalMarks;

}



// Function to display student information

void displayStudentData(const Student* student) {

    cout << "Name: " << student->name << endl;

    cout << "Age: " << student->age << endl;

    cout << "Total Marks: " << student->totalMarks << endl;

}



// Function to calculate average marks of two students

float calculateAverageMarks(const Student* student1, const Student* student2) {

    return (student1->totalMarks + student2->totalMarks) / 2.0;

}



int main() {

    Student student1, student2;



    cout << "Enter data for Student 1:" << endl;

    inputStudentData(&student1);



    cout << "\nEnter data for Student 2:" << endl;

    inputStudentData(&student2);



    cout << "\nStudent 1 Details:" << endl;

    displayStudentData(&student1);



    cout << "\nStudent 2 Details:" << endl;

    displayStudentData(&student2);



    float averageMarks = calculateAverageMarks(&student1, &student2);

    cout << "\nThe average marks of the two students are: " << averageMarks << endl;



    return 0;

}













include <iostream>

using namespace std;



// Function to compute the sum of array elements

int sumArray(int* arr, int size) {

    int sum = 0;

    for (int i = 0; i < size; ++i) {

        sum += *(arr + i); // Accessing elements using pointer arithmetic

    }

    return sum;

}



int main() {

    int n;

    cout << "Enter the number of elements in the array: ";

    cin >> n;



    int* arr = new int[n]; // Dynamic array

    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; ++i) {

        cin >> arr[i];

    }



    int sum = sumArray(arr, n);

    cout << "The sum of the array elements is: " << sum << endl;



    delete[] arr; // Free dynamically allocated memory

    return 0;

}



















#include <iostream>

using namespace std;



// Function to compute sum and average

void computeSumAndAverage(int* arr, int size, int* sum, float* average) {

    *sum = 0;

    for (int i = 0; i < size; ++i) {

        *sum += *(arr + i); // Add elements to sum

    }

    *average = static_cast<float>(*sum) / size; // Calculate average

}



int main() {

    const int size = 10;

    int numbers[size];

    int sum;

    float average;



    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < size; ++i) {

        cin >> *(numbers + i); // Store input using pointer notation

    }



    computeSumAndAverage(numbers, size, &sum, &average);



    cout << "Sum of the numbers: " << sum << endl;

    cout << "Average of the numbers: " << average << endl;



    return 0;

}