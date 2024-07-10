#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], temp[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    strcpy(temp, str1);
    cout << "String 1 copied to temp using strcpy: " << temp << endl;

    // Concatenate str2 to temp using strcat
    strcat(temp, str2);
    cout << "String 2 concatenated to temp using strcat: " << temp << endl;

    // Find the length of str1 using strlen
    cout << "Length of string 1: " << strlen(str1) << endl;

    // Compare str1 and str2 using strcmp
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        cout << "Both strings are equal." << endl;
    else if (cmp < 0)
        cout << "String 1 is less than string 2." << endl;
    else
        cout << "String 1 is greater than string 2." << endl;

    return 0;
}

