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
private:
    unordered_map <int, int> map;
public:
    TreeNode *helper(vector<int>& pre, int pl, int pr, vector<int>& in, int il, int ir){
        if (pl > pr || il > ir) return NULL;

        int var = pre[pl];
        int in_pos = map[var];
        TreeNode *root = new TreeNode(var);
        int size = in_pos - il;

        root->left = helper(pre, pl + 1, pl + size, in, il, in_pos - 1);
        root->right = helper(pre, pl + size + 1, pr, in, in_pos + 1, ir);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty()) return NULL;
        for (int i = 0; i < inorder.size(); i ++){
            map[inorder[i]] = i;
        }
        
        return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }
};
