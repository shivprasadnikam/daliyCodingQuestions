
                                                      // Find the Index of the First Occurrence in a String //



class Solution {
public:
    int strStr(string haystack, string needle) {
            int a=haystack.length();
            int b=needle.length();

            for(int i=0; i<a-b+1; i++)
            {
                if(haystack.substr(i,b)==needle)
                return i;
            }
            return -1;
    }
};
