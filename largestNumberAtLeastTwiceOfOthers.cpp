



                                                          //  Largest Number At Least Twice of Others  //

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int count=0,index=-1;
        for(int i=0; i<nums.size(); i++)
        {
            count=0;
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[i]>=nums[j]*2 && nums[i]!=0)
                {
                    count++;
                    index=i;
                    if(count==nums.size()-1)
                    return index;
                }
              
            }
             // cout<<count<<endl;
            
        }
        

        
        
        
    return -1;
       
    }
};
