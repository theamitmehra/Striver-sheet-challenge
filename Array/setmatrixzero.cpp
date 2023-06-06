#include "code.cpp"

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    unordered_set<int> zeroRows;
    unordered_set<int> zeroCols;

    // Find the rows and columns with zeros
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroRows.insert(i);
                zeroCols.insert(j);
            }
        }
    }

    // Set rows with zeros to all zeros
    for (int row : zeroRows) {
        for (int j = 0; j < cols; j++) {
            matrix[row][j] = 0;
        }
    }

    // Set columns with zeros to all zeros
    for (int col : zeroCols) {
        for (int i = 0; i < rows; i++) {
            matrix[i][col] = 0;
        }
    }
}

int main() {
    // Example usage
    vector<vector<int>> matrix = { {1, 1, 1}, {1, 0, 1}, {1, 1, 1} };

    cout << "Before setting zeroes:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    setZeroes(matrix);

    cout << "After setting zeroes:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
