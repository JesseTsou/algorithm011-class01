class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if (root == NULL)
            return res;
        stack<Node *> sta;
        Node *tmp = NULL;
        sta.push(root);
        while(!sta.empty()){
            tmp = sta.top();
            sta.pop();
            res.push_back(tmp->val);
            for (int i = tmp->children.size() - 1; i >= 0; i --){
                sta.push(tmp->children[i]);
            }
        }
        return res;
    }
};
