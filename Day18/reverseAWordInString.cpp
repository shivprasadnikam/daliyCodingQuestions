

                                                                // Reverse a word in string  //

class Solution {
public:
    string reverseWords(string s) {
        string ans;
        string word;
        for(int i=s.length()-1; i>=0; i--)
        {
            word="";
            while(i>=0 && s[i]!=' ')
            {
                word+=s[i];
                i--;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0)
            {
                ans+=word;
                ans+=" ";
            }
        }
       ans.erase(ans.size()-1,1);
        return ans;
    }
};
