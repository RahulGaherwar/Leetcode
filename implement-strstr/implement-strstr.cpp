class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==""){
            return 0;
        }
        int i=haystack.length();
        int f=haystack.find(needle);
        if(f<i)
        {
            return f;
        }else
            return -1;
    }
};