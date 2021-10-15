class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        
          vector<int> ans(2);
      for(int i=0;i<a.size();i++)
            {
                for(int j=i+1;j<a.size();j++)
                {
                    if(a[i]+a[j]==target)
                    {
                        ans[0]=i;
                        ans[1]=j;
                        return ans;
                    }
                }
            }
return ans;        
    
        
    };
};