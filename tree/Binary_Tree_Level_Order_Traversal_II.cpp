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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL){
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty() == false){
            int s = q.size();
            vector<int> v1;
            while(s--){

                TreeNode* curr = q.front();
                v1.push_back(curr -> val);
                q.pop();
                
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            v.push_back(v1);
        }
        reverse(v.begin() , v.end());
        return v;
    }
};
