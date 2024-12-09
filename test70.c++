#include <iostream>
#include <vector>
using namespace std;

// تعريف اللوحة كـ 2D Array
void initializeBoard(vector<vector<char>>& board) {
    // قطع اللاعب الأبيض
    board = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}, // الصف الأول
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, // البيادق
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, // فراغات
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'}, // بيادق الأسود
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}  // الصف الأخير
    };
}

// طباعة اللوحة
void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    // لوحة الشطرنج
    vector<vector<char>> chessBoard(8, vector<char>(8, ' '));

    // تهيئة اللوحة
    initializeBoard(chessBoard);

    // طباعة اللوحة
    cout << "لوحة الشطرنج المبدئية:" << endl;
    printBoard(chessBoard);

    return 0;
}
