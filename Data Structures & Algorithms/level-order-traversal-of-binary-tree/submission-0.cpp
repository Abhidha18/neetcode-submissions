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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            vector<int>level;
            int size=qu.size();
            for(int i=0;i<size;i++){
                TreeNode* t=qu.front();
                level.push_back(t->val);
                qu.pop();
                if(t->left!=NULL)qu.push(t->left);
                if(t->right!=NULL)qu.push(t->right);
            }
            ans.push_back(level);

        }
        return ans;
    }
};
