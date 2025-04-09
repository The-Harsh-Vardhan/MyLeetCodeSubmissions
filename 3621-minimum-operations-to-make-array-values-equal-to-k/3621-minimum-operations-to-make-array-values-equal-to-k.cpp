class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> os(nums.begin(), nums.end());
        int count = 0;
        int equal = 0;
        bool found = false;
        for (int num : os) {
            if (num > k) {
                found = true;
                count++;
            }
            else if ( num < k ) {
                return -1;
            }
        }
        for( int i = 0 ; i < nums.size() ; i++ ) {
            if( nums[i] == k ) {
                equal++;
            }
        }
        cout << "Equal = " << equal << endl;
        cout << "Size of Nums = " << nums.size() << endl;
        if( equal == nums.size() ) {
            return 0;
        }
        if( !found ) {
            return -1;
        }
        return count;
    }
};