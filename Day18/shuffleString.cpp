

                                                          //  Shuffle String  //

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int size=indices.size();
        string ans=s;
        for(int i=0; i<size; i++)
        {
           ans[indices[i]]=s[i]; 
        }
       return ans; 
    }
};
