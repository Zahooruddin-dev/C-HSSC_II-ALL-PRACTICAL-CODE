#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Size of the array
    int numbers[SIZE]; // Array to store numeric values
    int sum = 0; // Variable to store the sum of all values
    int highest, lowest;

    // Input loop to store values in the array
    cout << "Enter " << SIZE << " numeric values:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Value " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i];

        // Finding the highest value
        if (i == 0 || numbers[i] > highest) {
            highest = numbers[i];
        }

        // Finding the lowest value
        if (i == 0 || numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    // Calculate the average
      int average = sum / SIZE;


    // Output results
    cout << "Highest value: " << highest << endl;
    cout << "Lowest value: " << lowest << endl;
    cout << "Average value: " << average << endl;

    return 0;
}

