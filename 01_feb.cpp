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
 int rows, cols;
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};

    bool dfs(vector<vector<char>>& mat, string& word, int i, int j, int index) {
        if (index == word.length()) return true;
        if (i < 0 || i >= rows || j < 0 || j >= cols || mat[i][j] != word[index]) {
            return false;
        }
        char temp = mat[i][j];
        mat[i][j] = '#';  // Mark as visited
        for (int d = 0; d < 4; d++) {
            int newX = i + dx[d];
            int newY = j + dy[d];

            if (dfs(mat, word, newX, newY, index + 1)) {
                return true;
            }
        }
        mat[i][j] = temp;
        
        return false;
    }

    bool isWordExist(vector<vector<char>>& mat, string& word) {
        rows = mat.size();
        cols = mat[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == word[0] && dfs(mat, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
return 0;
}