

                                                  //  Maximum Count of Positive Integer and Negative Integer  //



class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countOfPositive=0,countOfNegative=0;
        for(int i=0; i<nums.size(); i++)
        {
             if(nums[i]<0)
                countOfNegative++;
        
             if(nums[i]>0)
                countOfPositive++;
        }
       
        
        return max(countOfPositive,countOfNegative);
            
            
    }
};
