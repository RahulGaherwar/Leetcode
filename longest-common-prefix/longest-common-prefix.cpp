class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string s=strs[0];
        int i,j;
         string res="";
        bool isPrefix=true;
        for(i=0;i<s.length();i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>strs[j].length() || s[i]!=strs[j][i]){
                    isPrefix=false;
                    break;
                }
              
            }
              if(isPrefix)
            res += s[i];
            else
            break;
        }
        return res;
    }
};