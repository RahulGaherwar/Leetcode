class Solution {
public:
    string addStrings(string nums1, string nums2) {
       string res;
    
    int i = nums1.size()-1;
    int j = nums2.size()-1;
    int rem = 0;
    int sum = 0;
    while(i >= 0 || j >= 0)
    {
        int n1 = 0, n2 = 0;
        if(i >= 0)
        {
            n1 = nums1[i] - '0';
            i--;
        }
        if(j >= 0)
        {
            n2 = nums2[j] - '0';
            j--;
        }
        
        sum = (n1 + n2 + rem) % 10;
        
        rem = (n1 + n2 + rem)/10;
        
        res = (char)('0'+ sum) + res;
    }
    
    if(rem != 0)
    {
        res = (char)('0' + rem) + res;
    }
    
    return res;
}

    };