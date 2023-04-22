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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int , multiset<int>>> mp;
        queue <pair<TreeNode* , pair<int , int>>> q;
        q.push({root , {0,0}});
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            TreeNode* curr = x.first;
            int a = x.second.first , b = x.second.second;
            mp[a][b].insert(curr->val);
            if(curr->left != NULL){
                q.push({curr->left , {a-1 , b+1}});
            }
            if(curr->right != NULL){
                q.push({curr->right , {a+1 , b+1}});
            }

        }
        // for(auto)
        vector<vector<int>> ans;
        for(auto i: mp){
            // cout<<i.first <<endl;
            vector<int> col;
            for(auto j: i.second){
                col.insert(col.end() , j.second.begin() , j.second.end());
                // cout<<j.second.size()<<" ";
            }
            // cout<<endl;
            ans.push_back(col);
        }
        return ans;
        
    }
};
