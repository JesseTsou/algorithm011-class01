class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0)
            return 0;
        sort(coins.rbegin(), coins.rend());
        int ans = INT_MAX;
        coinChange(coins, amount, 0, 0, ans);
        return ans == INT_MAX ? -1 : ans;
    }

    void coinChange(vector<int>& coins, int amount, int index, int count, int &ans){
        if (amount == 0){
            ans = min(ans, count);
            return;
        }
        if (index == coins.size())
            return;

        for (int k = amount / coins[index]; k >= 0 && k + count < ans; k --){
            coinChange(coins, amount - k * coins[index], index + 1, count + k, ans);
        }
    }
};
