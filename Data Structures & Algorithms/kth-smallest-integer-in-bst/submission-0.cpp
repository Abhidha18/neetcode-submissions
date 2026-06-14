/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int fun(TreeNode* root, int &k, int &cnt, vector<int>& ans) {
        if (root == NULL) return -1;

        int left = fun(root->left, k, cnt, ans);
        if (left != -1) return left;

        cnt++;
        ans.push_back(root->val);

        if (cnt == k) return root->val;

        return fun(root->right, k, cnt, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        int cnt = 0;
        return fun(root, k, cnt, ans);
    }
};