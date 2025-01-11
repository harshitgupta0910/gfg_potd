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
    int maxWater(vector<int> &arr) {int n = arr.size();if (n < 3) return 0;
    vector<int> leftMax(n), rightMax(n);int df = 0;
    leftMax[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }
    rightMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i + 1], arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        df +=  (0, min(leftMax[i], rightMax[i]) - arr[i]);
    }

    return df;
    }
};
return 0;
}