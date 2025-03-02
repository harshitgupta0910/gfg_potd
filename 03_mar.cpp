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
vector<int> longestSubarray(vector<int>& arr, int x) {
    int n = arr.size();
    int max_len = 0;
    int max_start = 0;

    for (int i = 0; i < n; i++) {
        int min_val = arr[i];
        int max_val = arr[i];

        for (int j = i; j < n; j++) {
            min_val = min(min_val, arr[j]);
            max_val = max(max_val, arr[j]);

            if (max_val - min_val <= x) {
                if (j - i + 1 > max_len) {
                    max_len = j - i + 1;
                    max_start = i;
                }
            } else {
                break;
            }
        }
    }

    vector<int> result;
    for (int i = max_start; i < max_start + max_len; i++) {
        result.push_back(arr[i]);
    }

    return result;
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}