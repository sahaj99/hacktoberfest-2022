class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // using kadane's algorithm
        int n = nums.size();
        
        int max_sum = INT_MIN, sum = 0;
        for(int x: nums) {
            sum += x;
            max_sum = max(max_sum, sum);
            
            if(sum < 0) sum = 0;
        }
        return max_sum;
    }
};
