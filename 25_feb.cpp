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
int getMaxArea(vector<int> &arr) {
    stack<int> st;
  long long nm = 0;
  int n = arr.size();
  arr.push_back(0);
  for (int i = 0; i <= n; i++) {
      while (!st.empty() && arr[i] < arr[st.top()]) {
          int h = arr[st.top()];
          st.pop();
          int w = st.empty() ? i : i - st.top() - 1;
          nm = max(nm, (long long)h * w);
      }
      st.push(i);
  }
  
  arr.pop_back();
  return nm;
  }
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}