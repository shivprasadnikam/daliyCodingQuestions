

                                                    // Majority of Element //



class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //sort(nums.begin(),nums.end())
        unordered_map<int,int>ans;
        vector<int>output;
        for(int i=0; i<nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        for(auto x:ans)
        {
            if(x.second>(nums.size()/3))
            {
                output.push_back(x.first);
            }
        }
        return output;
            
    }
};
