

                                                                   // 3Sum //
                                                                   
   
   class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //using two pointer approach
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>sum;    //creating set of vector cause we have  to insert elements vector 

        for(int i=0; i<nums.size()-2; i++)
        {
            int fixedValue=nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                int currSum=fixedValue+nums[right]+nums[left];
                if(currSum==0)
                {
                    sum.insert({fixedValue,nums[left++],nums[right--]});
                   // left++;
                    //right--;
                
                }
                else if(currSum<0)
                left++;
                else
                right--;
            }
            
            
        }
        //pushing all elements from set to vector
        for(auto x:sum)
            {
                ans.push_back(x);
            }
        return ans;

    }
};


