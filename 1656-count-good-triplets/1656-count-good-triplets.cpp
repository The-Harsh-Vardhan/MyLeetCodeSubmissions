class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int count = 0;
        for( int i = 0 ; i < n - 2 ; i++ ) {
            for( int j = i + 1 ; j < n - 1 ; j++ ) {
                for( int k = j + 1 ; k < n ; k++ ) {
                    int A = abs(arr[i] - arr[j]);
                    int B = abs(arr[j] - arr[k]);
                    int C = abs(arr[i] - arr[k]);
                    if( A <= a && B <= b && C <= c ) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};