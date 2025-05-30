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
   vector<vector<int>> solutions;
    bool isSafe(vector<int>& board, int col, int row) {
        for (int prevCol = 0; prevCol < col; prevCol++) {
            int prevRow = board[prevCol];
            if (prevRow == row || abs(prevRow - row) == abs(prevCol - col)) 
                return false;
        }
        return true;
    }

    void solve(int col, vector<int>& board, int n) {
        if (col == n) {
            solutions.push_back(board);
            return;
        }

        for (int row = 1; row <= n; row++) {
            if (isSafe(board, col, row)) {
                board[col] = row;
                solve(col + 1, board, n);
                board[col] = 0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        vector<int> board(n, 0);
        solve(0, board, n);
        return solutions;
    }
};
return 0;
}