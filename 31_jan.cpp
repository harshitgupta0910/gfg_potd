//Author :D HARSHIT 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> sti;
typedef set<long> stl;
typedef set<char> stc;
typedef set<string> str;
typedef map<int, int> mpii;
typedef map<int, char> mpic;
typedef map<char, int> mpci;
typedef map<int, string> mpis;
typedef map<string, int> mpsi;
typedef map<string, string> mpss;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (int)s.size()
#define print(x) cout << x << '\n'
#define ull unsigned long long
#define ll long long
#define int ll
using pii = pair<int, int>;
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
class Solution {
  public:
bool isValid(vector<vector<int>> &mat, int row, int col, int num) {
        for (int i = 0; i < 9; i++) {
            if (mat[row][i] == num || mat[i][col] == num)
                return false;
            
            int subGridRow = 3 * (row / 3) + i / 3;
            int subGridCol = 3 * (col / 3) + i % 3;
            if (mat[subGridRow][subGridCol] == num)
                return false;
        }
        return true;
    }
    bool solveSudokuHelper(vector<vector<int>> &mat) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (mat[row][col] == 0) {
                    for (int num = 1; num <= 9; num++) {
                        if (isValid(mat, row, col, num)) {
                            mat[row][col] = num;
                            if (solveSudokuHelper(mat))
                                return true;

                            mat[row][col] = 0;
                        }
                    }
                    return false; 
                }
            }
        }
        return true; 
    }
    void solveSudoku(vector<vector<int>> &mat) {
        solveSudokuHelper(mat);
    }
};
}