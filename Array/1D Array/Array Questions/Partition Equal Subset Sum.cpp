#include <vector>
#include <numeric>

class Solution {
public:
    bool canPartition(std::vector<int>& nums) {
        int total_sum = std::accumulate(nums.begin(), nums.end(), 0);
        
        if (total_sum % 2 != 0) {
            return false;
        }
        
        int target = total_sum / 2;
        std::vector<bool> dp(target + 1, false);
        dp[0] = true;
        
        for (int num : nums) {
            for (int i = target; i >= num; --i) {
                dp[i] = dp[i] || dp[i - num];
            }
        }
        
        return dp[target];
    }
};
