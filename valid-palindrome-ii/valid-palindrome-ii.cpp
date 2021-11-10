class Solution {
public:

        bool check(string s,int left,int right){
        while(left <right){
            if(s[left]!=s[right])
                return false;
            left++,right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0,right=s.length()-1;
        while(left<right){
            if(s[left]!=s[right])        // one unmatching found
                return check(s,left+1,right) or check(s,left,right-1);  //check for other unmatch character (if exists)
            left++,right--;
        }
        return true;
    }
        
    
};