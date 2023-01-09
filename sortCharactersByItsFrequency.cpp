


                                                              // Sort Charcters by its frequency  //


class Solution {
public:
    string frequencySort(string s) {
        /*
            Approach
            1) create hashmap for storing frequency
        */
        unordered_map<char,int>ans;
        
        for(auto x:s)
        {
            ans[x]++;
        }

        sort(s.begin(),s.end(),[&](int a,int b)
        {
            return ans[a]!=ans[b] ? ans[a]>ans[b] : a>b;
        });
        return s; 
    }
};
