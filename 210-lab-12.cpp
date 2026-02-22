//COMSC-210 | Lab 12 std::array | Noel Mier-Luna
#include <iostream>
#include <array> // For std::array
#include <fstream> // For file I/O
#include <algorithm> // For sort and reverse
#include <numeric> // For accumulate
using namespace std;

const int SIZE = 10; // Size of the array

//Features we want to use in this lab:
//  std::array - A container that encapsulates fixed size arrays.
//  size() - A member function of std::array that returns the number of elements in the array.
//  File I/O - Reading from and writing to files using fstream.
//  Algorithms - Using algorithms like sort and reverse from the <algorithm> library.
//  Accumulate - Using the accumulate function from the <numeric> library to sum elements in an array.
// .at() - A member function of std::array that provides bounds-checked access to elements.
// .begin() and .end() - Member functions of std::array that return iterators to the beginning and end of the array, respectively.
// rbegin() and rend() - Member functions of std::array that return reverse iterators to the beginning and end of the array, respectively.
// find() - An algorithm from the <algorithm> library that searches for a specific value in a range of elements using an iterator.

int main()
{
    array<int, SIZE> randomArray; // Declare an empty array of integers with size 30.
    cout << "The size of the array is: " << randomArray.size() << endl; // Display the size of the array.

    

    return 0;
}