/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void f(TreeNode* root, TreeNode* target, unordered_map <TreeNode* , TreeNode*> &mparent ){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front(); 
            q.pop();
            if(curr->left) {
                mparent[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right) {
                mparent[curr->right] = curr;
                q.push(curr->right);
            }
        }
        
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map <TreeNode* , TreeNode*> mparent;
        f(root , target , mparent);
        unordered_map <TreeNode* , bool> visited;
        queue<TreeNode*> que;
        que.push(target);
        visited[target] = true;
        int level = 0;
        while(!que.empty()){
            int sz = que.size();
            if(level++ == k){
                break;
            }
            for(int i=0 ; i<sz ; i++){
                TreeNode* curr = que.front(); 
                que.pop();
                if(curr->left && !visited[curr->left]) {
                    que.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right]) {
                    que.push(curr->right);
                    visited[curr->right] = true;
                }
                if(mparent[curr] && !visited[mparent[curr]]){
                    que.push(mparent[curr]);
                    visited[mparent[curr]] = true;
                }
            }   
        }
        vector<int > v;
        while(!que.empty()){
            TreeNode* curr = que.front(); 
            que.pop();
            v.push_back(curr->val);
        }
        return v;
        
    }
};
