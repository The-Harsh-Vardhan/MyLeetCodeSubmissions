class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> total_distinct;
        for (int num : nums) {
            total_distinct.insert(num);
        }
        int target = total_distinct.size();
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            unordered_set<int> window;
            for (int j = i; j < n; ++j) {
                window.insert(nums[j]);
                if (window.size() == target) {
                    count++;
                }
            }
        }

        return count;
    }
};