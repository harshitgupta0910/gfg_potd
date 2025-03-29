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
vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
    // code here
     int n=deadline.size();
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({deadline[i], profit[i]});
    }
    sort(v.begin(), v.end());
    
    priority_queue<int, vector<int>, greater<int>>pq;
    int curr=0, points=0;
    for(int i=0;i<n;i++){
        if(v[i].first > curr){
            curr++;
            points+=v[i].second;
            pq.push(v[i].second);
        }
        else if(v[i].second > pq.top()){
            points-=pq.top();
            pq.pop();
            points+=v[i].second;
            pq.push(v[i].second);
        }
    }
    return {curr, points};
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}