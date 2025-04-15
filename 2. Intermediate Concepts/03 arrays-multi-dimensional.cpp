#include <iostream> 
using namespace std;
int main() {
    // Two-Dimensional Array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "2D Array (Matrix) elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Three-Dimensional Array
    int cube[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    cout << "\n3D Array elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "cube[" << i << "][" << j << "][" << k << "] = " << cube[i][j][k] << endl;
            }
        }
    }

    return 0;
}

/*
Explanation:

1. A 2D array `matrix` is declared with 2 rows and 3 columns and initialized with values.
2. Nested loops display each element of the 2D array.
3. A 3D array `cube` is declared with dimensions 2x2x2.
4. Triple nested loops display each element of the 3D array with its exact position.

Output:
2D Array (Matrix) elements:
1 2 3
4 5 6

3D Array elements:
cube[0][0][0] = 1
cube[0][0][1] = 2
cube[0][1][0] = 3
cube[0][1][1] = 4
cube[1][0][0] = 5
cube[1][0][1] = 6
cube[1][1][0] = 7
cube[1][1][1] = 8
*/
