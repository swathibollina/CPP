/*
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
*/

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
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode* > q;
        q.push(root);
        q.push(NULL);
        vector<int> temp_ans;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp==NULL)
            {
                ans.push_back(temp_ans);
                temp_ans.resize(0);
                if(q.size()>0)
                q.push(NULL);
            }
            else
            {
                temp_ans.push_back(temp->val);
                if(temp->left!=NULL)
                q.push(temp->left);
                if(temp->right!=NULL)
                q.push((temp->right));
            }
        }
        return ans;
    }
};
