class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int equal = 0;
        set<int> os;
        for( int i = 0 ; i < nums.size() ; i++ ) {
            os.insert(nums[i]);
            if( nums[i] == k ) {
                equal++;
            }
        }
        int count = 0;
        bool found = false;
        for (int num : os) {
            if ( num < k ) {
                return -1;
            }
            else if (num > k) {
                found = true;
                count++;
            }
        }
        if( equal == nums.size() ) {
            return 0;
        }
        if( !found ) {
            return -1;
        }
        return count;
    }
};