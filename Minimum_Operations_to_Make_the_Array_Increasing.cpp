class Solution {
public:
    int minOperations(vector<int>& nums) {
        int counter = 0; 
        for(int i = 0; i < nums.size() -1; i++)
        {
            while(nums[i] >= nums[i+1])
            {
                nums[i+1]++;
                counter++;
            }
        }
        return counter;
    }
};