


                                                                // Difference Between Element Sum and Digit Sum of an Array //
                                                                


class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int size=nums.size();
        int digitSum=0;
        int rem=0;
        int sum=0;
        for(int i=0; i<size; i++)
        {
            sum+=nums[i];
            while(nums[i]>0)
            {
                rem=nums[i]%10;
                digitSum+=rem;
                nums[i]/=10;
            }
        }
        return abs(digitSum-sum);
            
    }
};
