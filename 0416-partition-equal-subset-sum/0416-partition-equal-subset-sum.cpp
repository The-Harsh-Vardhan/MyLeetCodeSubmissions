class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum_of_elements = accumulate( nums.begin(), nums.end(), 0);
        if( sum_of_elements % 2 ) {
            return false;
        }
        unordered_set<int>dp;
        unordered_set<int>nextDP;
        dp.insert(0);
        int target = sum_of_elements / 2;

        for( int i = nums.size() - 1 ; i > -1 ; --i ) {
            for( auto j : dp ) {
                nextDP.insert( j + nums[i] );
                nextDP.insert( j );
            }
            dp = nextDP;
        }
        return dp.count(target);
    }
};