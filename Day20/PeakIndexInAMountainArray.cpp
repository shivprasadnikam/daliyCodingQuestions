class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int maxNo=INT_MIN;
        int indexOfMaxElement=0;
        //vector<int>ans;
     for(int i=0; i<arr.size(); i++)
      {
          if(arr[i]>maxNo)
          {
              maxNo=arr[i];
               indexOfMaxElement=i;
          }
           
      }
      return indexOfMaxElement;

      
    }
    
};
