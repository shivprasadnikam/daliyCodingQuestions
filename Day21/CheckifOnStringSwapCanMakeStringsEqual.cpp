
                                                        // Check if One String Swap Can Make Strings Equal  //


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
            count++;
        }
        cout<<count<<endl;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
            return false;
        }
        if(count>2)
        return false;
        else
        return true;
    }
};
