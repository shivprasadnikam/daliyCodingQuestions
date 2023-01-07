

                                                                // Jump Game   //  





class Solution {
public:
    bool canJump(vector<int>& nums) {
        //edge cases
      

        if(nums.size()<=1)
        return true;

        if(nums[0]==0)
        return false;

        int jump=1;
        int step=nums[0];
        int maxReach=nums[0];

        for(int i=1; i<nums.size(); i++)
        {
            if(i==nums.size()-1)
            return true;

            maxReach=max(maxReach,i+nums[i]);
            step--;

            if(step==0)
            {
                jump++;
            }
            if(i>=maxReach)
            return false;
            
            step=maxReach-i;
        }

        return false;
    }
};
