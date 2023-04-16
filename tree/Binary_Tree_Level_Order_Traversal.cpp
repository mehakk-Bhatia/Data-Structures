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
        vector<vector<int>> v;
        if(root == NULL){
            return v;
        }
        
        queue <TreeNode*> q;
        q.push(root);
        // q.push(NULL);
        while(q.empty() == false){
            int s = q.size();
            vector<int> v1;
            while(s--){

                TreeNode* x = q.front();
                v1.push_back(q.front()->val);
                q.pop();
                
                
                if(x->left != NULL){
                    q.push(x->left);
                }
                if(x->right != NULL){
                    q.push(x->right);
                }
            }
            v.push_back(v1);

        }
        return v;
        
    }
};
