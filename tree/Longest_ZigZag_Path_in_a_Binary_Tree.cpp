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
    int maxi=0;
    void f(TreeNode* root,int d,int curr){
        if(root == NULL){
            return;
        }
        maxi = max(maxi,curr);
        f(root->left , 0 , d ? curr+1 : 1);
        f(root->right , 1 , d ? 1 : curr+1);
    }

    int longestZigZag(TreeNode* root) {
        f(root,0,0);
        f(root,1,0);
        return maxi;
    }
};
