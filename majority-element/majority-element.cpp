class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int count=0,candidate=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(count ==0){
                candidate=nums[i];
            }
            
            if(nums[i]==candidate)count++;
            else count--;
                
        }
        if(count==floor(n/2))
            return candidate;
        
        return candidate;
        
        
    }
};