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
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node* LCA(Node* root, Node* n1, Node* n2) {
    if (!root) return NULL;
   if (n1->data < root->data && n2->data < root->data)
       return LCA(root->left, n1, n2);
   if (n1->data > root->data && n2->data > root->data)
       return LCA(root->right, n1, n2);
   return root;
   // code here
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

return 0;
}