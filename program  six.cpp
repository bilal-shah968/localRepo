#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int i, numbers[size];
    int squares[size];
    int cubes[size];
    int sums[size];

    // store the numbers in arrays
    for (i = 0; i < size; i++)
    {
        numbers[i] = i;
        squares[i] = i * i;
        cubes[i] = i * i * i;
        sums[i] = numbers[i] + squares[i] + cubes[i];
    }

    // output the sum array and add up all the sums
    int total = 0;

    cout << "numbers:\t";
    for (i = 0; i < size; i++)
        cout << numbers[i] << "\t";
    cout << endl;

    cout << "squares:\t";
    for (i = 0; i < size; i++)
        cout << squares[i] << "\t";
    cout << endl;

    cout << "cubes:\t\t";
    for (i = 0; i < size; i++)
        cout << cubes[i] << "\t";
    cout << endl;

    cout << "sums:\t\t";
    for (i = 0; i < size; i++)
    {
        cout << sums[i] << "\t";
        total = total + sums[i];
    }
    cout << endl;

    cout << "Grand total: " << total << endl;
    
    return 0;
}
