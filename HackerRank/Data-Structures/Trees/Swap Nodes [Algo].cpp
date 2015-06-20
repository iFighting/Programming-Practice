#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode{
int index, depth;
    TreeNode *left, *right;
    TreeNode(int x) : index(x), depth(1), left(NULL), right(NULL) {}
};

void build(TreeNode *root, vector<vector<int> >& res) {
    if (res[root->index][0] != -1) {
        TreeNode *cur = new TreeNode(res[root->index][0]);
        cur->depth = root->depth + 1;
        root->left = cur;
        build(cur, res);
    }
    if (res[root->index][1] != -1) {
        TreeNode *cur = new TreeNode(res[root->index][1]);
        cur->depth = root->depth + 1;
        root->right = cur;
        build(cur, res);
    }
}

void inorder(TreeNode *root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->index << " ";
    inorder(root->right);
}

void swap(TreeNode *root, int k) {
    if (root == NULL) return;
    if (root->depth % k == 0) {
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    swap(root->left, k);
    swap(root->right, k);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, t, k;
    cin >> n;
    vector<vector<int> > h(n + 1, vector<int>(2));
    for (int i = 1; i <= n; i ++) {
        cin >> h[i][0] >> h[i][1];
    }
    TreeNode *root = new TreeNode(1);
    build(root, h);
    cin >> t;
    for (int i = 0; i < t; i ++) {
        cin >> k;
        swap(root, k);
        inorder(root);
        cout << endl;
    }
    return 0;
}
