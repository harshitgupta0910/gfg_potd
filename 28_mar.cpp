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
int activitySelection(vector<int> &start, vector<int> &finish) {
    // code here
    vector<pair<int,int>>temp;
    for(int i=0;i<start.size();i++)temp.push_back({start[i],finish[i]});
    auto comp=[&](auto &a,auto& b){
        return a.second<b.second;
    };
    sort(temp.begin(),temp.end(),comp);
    int count=1;
    int currFinish=temp[0].second;
    for(int i=1;i<start.size();i++){
        if(temp[i].first>currFinish){
            count++;
            currFinish=temp[i].second;
        }
    }
    return count;

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}