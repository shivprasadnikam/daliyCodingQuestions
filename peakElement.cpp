


                                                      //  Peak Element  //


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak=INT_MIN;
        int peakIndex=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>peak)
            {
                peak=nums[i];
                peakIndex=i;
            }
        }
        return peakIndex;
    }
};
