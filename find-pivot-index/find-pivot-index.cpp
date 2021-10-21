class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         
        int n=nums.size();
        int sum=accumulate(nums.begin(), nums.end(), 0);
        int s1=0,s2=0;
        
        for(int i=0;i<n;i++)
        {
            s2=sum-s1-nums[i];
            
            if(s2==s1)
                return i;
            
            s1+=nums[i];
            
        }
		
        return -1;
        
    }
};