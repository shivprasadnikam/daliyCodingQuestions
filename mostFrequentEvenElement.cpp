


                                                            // Most Frequent even element  //


class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        map<int,int>ans;
        int currMax=0;
        int max=INT_MIN;
        int element=-1;
        for(int i=0; i<nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        for(auto x:ans)
        {
            if(x.first%2==0)
            {
                currMax=x.second;
               // cout<<x.first<<endl;
                if(max<currMax)
                {
                    max=currMax;
                    //element=min(x.first,element);
                    element=x.first;
                    cout<<max<<endl;

                }
                
            }
        }
        return element;
    }
};
