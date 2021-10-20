class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0,i;
        for(i=0;i<nums.size();i++){
        sum=sum+nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};