class Solution {
public:
    int jump(vector<int>& nums) {
        int end = 0;
        int maxpos = 0;
        int res = 0;
        for (int i = 0; i < nums.size() - 1; i ++){
            maxpos = max(maxpos, i + nums[i]);
            if (end == i){
                end = maxpos;
                res ++;
            }
        }
        return res;
    }
};
