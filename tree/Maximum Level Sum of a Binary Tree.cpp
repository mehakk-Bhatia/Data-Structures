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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        int lev = 1;
        int ans = INT_MIN , res;
        queue <TreeNode* > q;
        q.push(root);
        while(q.empty() == false){
            int sum=0;
            int cnt = q.size();
            for(int i=0 ; i < cnt ; i++){
                TreeNode* curr = q.front();
                q.pop();
                sum+= curr->val;
                if(curr->left != NULL){
                    q.push(curr->left);
                } 
                if(curr->right != NULL){
                    q.push(curr->right);
                } 
            }
            if(sum > ans){
                ans = sum;
                res = lev;
            }
            lev++;
        }
        return res;
        
    }
};
