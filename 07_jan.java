//Author :D HARSHIT 
// #include <bits/stdc++.h>
// using namespace std;
import java.util.*;
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
        public int countPairs(int[] arr, int target) {
            int s = 0;
            int e = arr.length - 1;
            int count = 0;
    
            while (s < e) {
                int sum = arr[s] + arr[e];
    
                if (sum > target) {
                    e--;
                } else if (sum < target) {
                    s++;
                } else {
                    int ele1 = arr[s], ele2 = arr[e];
                    int c1 = 0, c2 = 0;
    
                    while (s <= e && arr[s] == ele1) {
                        c1++;
                        s++;
                    }
    
                    while (s <= e && arr[e] == ele2) {
                        c2++;
                        e--;
                    }
    
                    if (ele1 == ele2) {
                        count += c1 * (c1 - 1) / 2;
                    } else {
                        count += c1 * c2;
                    }
                }
            }
    
            return count;
        }
    }
return 0;
}