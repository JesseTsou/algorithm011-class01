class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i ++){
            map[nums[i]] = i;
        }
        vector<int> res;
        int j = 0;
        for (int i = 0; i < nums.size(); i ++){
            j = target - nums[i];
            if (map.find(j) != map.end() && i != map[j] ){
                res.push_back(i);
                res.push_back(map[j]);
                return res;
            }
        }
        return res;
    }
};
