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
// class Stream {
//     private:
//         vector<double> liquidShift;
//         vector<long long> segmentSizes;
        
//     public:
//         Stream(long long x) {
//             segmentSizes.resize(x);
//             liquidShift.resize(x + 1, 0);
//             for (long long j = 0; j < x; ++j) {
//                 segmentSizes[j] = (j + 1) % 100;
//             }
//         }
    
//         void injectFluid(long long A, long long B, double C) {
//             liquidShift[A - 1] += C;
//             if (B <= liquidShift.size()) {
//                 liquidShift[B - 1] -= C;
//             }
//         }
    
//         double computeMetric(long long A, long long B) {
//             double aggregate = 0;
//             double currentLevel = 0;
    
//             for (long long j = 0; j < B; ++j) {
//                 currentLevel += liquidShift[j];
//                 if (j >= A - 1) {
//                     double x = segmentSizes[j];
//                     aggregate += x * currentLevel;
//                 }
//             }
    
//             return aggregate;
//         }
//     };
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    vector<double> depth(n + 1, 0);
    vector<int> results;

    for (int i = 0; i < m; ++i) {
        int type;
        cin >> type;

        if (type == 0) {
            int l, r;
            double d;
            cin >> l >> r >> d;

            if(l >= 1 && r <= n && l <= r){
              for (int j = l; j <= r; ++j) {
                depth[j] += d;
              }
            }
        } else {
            int l, r;
            cin >> l >> r;

            double cost = 0;
            if(l >= 1 && r <= n && l <= r){
                for (int j = l; j <= r; ++j) {
                    cost += (double)j * depth[j];
                }
                results.push_back((int)cost);
             }
        }
    }

    for (int i = 0; i < results.size(); ++i) {
        cout << results[i] << (i == results.size() - 1 ? "" : " ");
    }
    cout << endl;
return 0;
}