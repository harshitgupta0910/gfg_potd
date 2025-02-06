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
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}

class Solution {
public:
    int ans;

    int diameter(Node* root) {
        ans = 1;
        depth(root);
        return ans - 1;
    }

    int depth(Node* node) {
        if (node == NULL) return 0;
        int L = depth(node->left);
        int R = depth(node->right);
        ans = max(ans, L + R + 1);
        return 1 + max(L, R);
    }
};
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
class Solution {
  public:
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        int preIndex = 0;
        return buildTreeHelper(inorder, preorder, 0, inorder.size() - 1, preIndex);
    }
    Node* buildTreeHelper(vector<int> &inorder, vector<int> &preorder, int inStart, int inEnd, int &preIndex) {
        if (inStart > inEnd) {
            return NULL;
        }
        Node* root = new Node(preorder[preIndex++]);
        int inIndex = inStart;
        while (inorder[inIndex] != root->data) {
            inIndex++;
        }
        root->left = buildTreeHelper(inorder, preorder, inStart, inIndex - 1, preIndex);
        root->right = buildTreeHelper(inorder, preorder, inIndex + 1, inEnd, preIndex);

        return root;

    }
};
return 0;
}