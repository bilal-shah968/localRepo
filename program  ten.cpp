#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

bool isPrime(int num) {
    if(num <= 1)  // 0 and 1 are not prime numbers
        return false;
    for(int i = 2; i <= sqrt(num); i++) {  // Check up to sqrt(num)
        if(num % i == 0)
            return false;  // Not a prime number
    }
    return true;  // Prime number
}

int main() {
    int arr[30], count = 0;

    // Input 30 numbers
    for(int i = 0; i < 30; i++) {
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    // Check for prime numbers
    for(int i = 0; i < 30; i++) {
        if(isPrime(arr[i]))
            count++;
    }

    cout << "Total prime numbers in the array: " << count << endl;
    return 0;
}
