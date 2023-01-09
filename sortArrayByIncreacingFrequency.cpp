

                                                      // Sort array by increaing frequency  //

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
     unordered_map<int,int>ans;
    // vector<int>output;  
     for(auto x :nums)
     {
         ans[x]++;
     }
     //lambda funtion to sort and ful filling the condition
     sort(nums.begin(),nums.end(),[&](int a,int b){
         return ans[a]!=ans[b] ? ans[a]<ans[b] : a>b;
     });
     return nums;

    }
};
