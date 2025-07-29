#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Input the odd integer N

    // Upper part including the middle row
    for (int i = 0; i < N / 2; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print backslash (\) at the start
        cout << "\\";
        
        // Print spaces in between
        for (int j = 0; j < N - 2 * (i + 1); j++) {
            cout << " ";
        }

        // Print forward slash (/) at the end
        if (i != N / 2 - 1) {  // Don't print this for the last row
            cout << "/";
        }

        cout << endl;
    }

    // Print the middle row (which is just "X")
    for (int i = 0; i < N / 2; i++) {
        cout << " ";
    }
    cout << "X" << endl;

    // Lower part, mirror of the upper part (excluding the center row)
    for (int i = N / 2 - 1; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Print backslash (\) at the start
        cout << "/";

        // Print spaces in between
        for (int j = 0; j < N - 2 * (i + 1); j++) {
            cout << " ";
        }

        // Print forward slash (/) at the end
        if (i != N / 2 - 1) {  // Don't print this for the last row
            cout << "\\";
        }

        cout << endl;
    }

    return 0;
}
