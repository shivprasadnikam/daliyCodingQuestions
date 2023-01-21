


                                                        //  Find the Distance Value Between Two Arrays   //

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
       int count=0; 
       sort(arr2.begin(),arr2.end());

       for(int i=0; i<arr1.size(); i++)
       {
           int start=0;
           int end=arr2.size()-1;
           bool check=true;
           while(start<=end)
           {
               
               int mid=(start+end)/2;
               if(abs(arr1[i]-arr2[mid])>d)
               {
                   if(arr2[mid]>arr1[i])
                   {
                       end=mid-1;
                   }
                   else
                   {
                       start=mid+1;
                   }
               }
               else
               {
                   check=false;
                   break;
               }
           }
           if(check)
            count++;
       }
       
      return count;
    }
};
