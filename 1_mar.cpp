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
class Solution {
    public:
      string decodedString(string &s) {
          stack<string> st;
          stack<int> num;
          string res = "";
          int n = 0;
          for (char c : s) {
              if (isdigit(c)) {
                  n = n * 10 + (c - '0');
              } else if (c == '[') {
                  num.push(n);
                  st.push(res);
                  res = "";
                  n = 0;
              } else if (c == ']') {
                  int c = num.top();
                  num.pop();
                  string prev = st.top();
                  st.pop();
                  for (int i = 0; i < c; i++) {
                      prev += res;
                  }
                  res = prev;
              } else {
                  res += c;
              }
          }
          return res;
  
      }
  };
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}