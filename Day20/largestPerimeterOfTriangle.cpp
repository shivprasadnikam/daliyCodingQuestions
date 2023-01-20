
                                                           // Largest Perimeter Triangle  //



class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int currPeri,maxPeri=0;
     int i=0,j=i+1,k=j+1;
     while(k<nums.size())
     {
         if(nums[i]+nums[j]>nums[k])
         {
             currPeri=nums[i]+nums[j]+nums[k];
             if(currPeri>maxPeri)
             maxPeri=currPeri;
         }
         i++;
         j++;
         k++;
     }  
     return maxPeri; 
    }
};
