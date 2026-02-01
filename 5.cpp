class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        
        // Find the two smallest elements from index 1 to n-1
        int first = INT_MAX, second = INT_MAX;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < first) {
                second = first;
                first = nums[i];
            } else if (nums[i] < second) {
                second = nums[i];
            }
        }
        
        return ans + first + second;
    }
};
