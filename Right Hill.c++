#include <iostream>
using namespace std;

void rightHill(int n) {
    // Function to print the right-aligned alphabet hill pattern
    int i, j;
    for (i = 1; i <= n; i++) {
        // Spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Alphabets
        char num = 'A';
        for (j = 1; j <= i; j++) {
            cout << num;
            num++;
        }
        // Move to the next line
        cout << "\n";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the right hill pattern: ";
    cin >> n;
    rightHill(n); // Call the function to print the pattern
    return 0;
}
