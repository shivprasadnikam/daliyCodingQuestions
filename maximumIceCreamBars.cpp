


                                                      // Maximum Ice-cream Bars  //


class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int currSum=0,count=0;
        for(int i=0; i<costs.size(); i++)
        {
            if(costs[i]<=coins)
            {
                currSum+=costs[i];
                count++;
                coins-=costs[i];
            }
        }
        cout<<currSum<<endl;
        return count;
    }
};
