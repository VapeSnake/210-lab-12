// COMSC-210 | Lab 12 std::array | Noel Mier-Luna
#include <iostream>
#include <array>     // For std::array
#include <fstream>   // For file I/O
#include <algorithm> // For sort and reverse
#include <numeric>   // For accumulate
using namespace std;

const int SIZE = 30; // Size of the array

// Features we want to use in this lab:
//   std::array - A container that encapsulates fixed size arrays. (Check)
//   size() - A member function of std::array that returns the number of elements in the array. (Check)
//   File I/O - Reading from and writing to files using fstream. (Check)
//   Algorithms - Using algorithms like sort and reverse from the <algorithm> library.
//   Accumulate - Using the accumulate function from the <numeric> library to sum elements in an array.
//  .at() - A member function of std::array that provides bounds-checked access to elements. (Check)
//  .begin() and .end() - Member functions of std::array that return iterators to the beginning and end of the array, respectively.
//  rbegin() and rend() - Member functions of std::array that return reverse iterators to the beginning and end of the array, respectively.
//  find() - An algorithm from the <algorithm> library that searches for a specific value in a range of elements using an iterator.

int main()
{
    array<int, SIZE> randomArray;                                       // Declare an empty array of integers with size 30.
    cout << "The size of the array is: " << randomArray.size() << endl; // Display the size of the array.

    ifstream inputFile("random_numbers.txt"); // Open the file containing random numbers.
    if (!inputFile)
    {
        cerr << "Error opening file." << endl;
        return -1; // Exits program if file can't be opened.
    }
    int i = 0;
    int element;
    while (inputFile >> element && i < SIZE)
    {                                // Read integers from the file and store them in the array until the end of the file or the array is full.
        randomArray.at(i) = element; // Use .at() for bounds-checked access to store elements in the array.
        i++;
    }

    inputFile.close(); // Closes file after reading.

    cout << "Displaying array elements \n: ";
    for (const int num : randomArray)
    {
        cout << num << " "; // Display the elements of the array using a range-based for loop.
    }

    return 0;
}