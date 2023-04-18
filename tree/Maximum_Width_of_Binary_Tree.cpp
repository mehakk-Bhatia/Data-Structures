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
    int widthOfBinaryTree(TreeNode* root) {
        if(root ==NULL){
            return 0;
        }
        int maxi = INT_MIN;
        queue<pair<TreeNode*, long long>> q;
        q.push({root , 0});
        while(!q.empty()){
            long s = q.size();
            long long mini = q.front().second;
            int f , l;
            for(long long i=0 ; i<s ; i++){
                long long cid = q.front().second - mini;
                TreeNode* curr = q.front().first;
                q.pop();
                if(i==0){
                    f = cid; 
                }
                if(i==s-1){
                    l = cid;
                }
                if(curr->left != NULL){
                    q.push({curr->left , cid*2 +1});
                }
                if(curr->right != NULL){
                    q.push({curr->right , cid*2 +2});
                }
            }
            maxi = max(maxi , l-f+1);
        }
        return maxi;
        
    }
};
