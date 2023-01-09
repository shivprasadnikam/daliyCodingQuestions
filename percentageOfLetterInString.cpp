

                                                              // Percentage of Letter in String //


class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,double>ans;
        int size=s.length();
        double percentage=0;
        for(auto x:s)
        {
            ans[x]++;
 
        }
        for(auto x:ans)
        {
                //cout<<x.first<<" "<<x.second<<endl;
                if(x.first==letter)
                {
                   // cout<<x.second/size<<endl;
                    double value=x.second/size;
                
                    percentage=(x.second/size)*100;
                }
        }

        return percentage;
    }
};
