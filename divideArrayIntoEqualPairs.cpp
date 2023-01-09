

                                                  // Divide Array Into Equal Pairs //

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int pair=nums.size()/2;
        unordered_map<int,int>ans;
        for(auto x:nums)
        {
            ans[x]++;
        }
        for(auto x:nums)
        {
            cout<<ans[x]<<endl;
            if(ans[x]%2!=0)
            return false;
        }
        return true;
    }
};
