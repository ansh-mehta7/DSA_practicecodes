#include <iostream>
#include <vector>
using namespace std;

void takeinput(vector<vector<int>>& matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
}

void spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int totalElements = row * col;

    int sRow = 0;
    int eCol = col - 1;
    int eRow = row - 1;
    int sCol = 0;

    int count = 0;
    while (count < totalElements) {
        // 1 start row 
        for (int i = sCol; i <= eCol && count < totalElements; i++) {
            cout << matrix[sRow][i] << " ";
            count++;
        }
        sRow++;
        // 2 end col
        for (int i = sRow; i <= eRow && count < totalElements; i++) {
            cout << matrix[i][eCol] << " ";
            count++;
        }
        eCol--;
        // 3 end row 
        for (int i = eCol; i >= sCol && count < totalElements; i--) {
            cout << matrix[eRow][i] << " ";
            count++;
        }
        eRow--;
        // 4 start col 
        for (int i = eRow; i >= sRow && count < totalElements; i--) {
            cout << matrix[i][sCol] << " ";
            count++;
        }
        sCol++;
    }
    cout << endl; // Print a newline after each spiral order output
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n));
        takeinput(matrix, n, n);
        spiralOrder(matrix);
    }
    return 0;
}
