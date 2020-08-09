class Solution {
public:
    vector<string> generateParenthesis(int n) {
        dfs(n, n, "");
        return res;
    }

private:
    vector<string> res;
    void dfs(int left, int right, string str){
        if (left == 0 && right == 0){
            res.push_back(str);
            return;
        }
        
        if (left > right) return;
        if (left > 0) dfs(left - 1, right, str + "(");
        if (right > 0) dfs(left, right - 1, str + ")");
        return ;
    }
};
