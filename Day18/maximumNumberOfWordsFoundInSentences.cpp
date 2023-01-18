

                                                        //  Maximum Number of Words Found in Sentences  //


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int currCount,maxCount=INT_MIN;
        for(int i=0; i<sentences.size(); i++)
        {
             currCount=1;
            for(int j=0; j<sentences[i].length(); j++)
            {
               
                if(sentences[i][j]==' ')
                currCount++;
                maxCount=max(maxCount,currCount);
            }
        }
      

        return maxCount;
    }
};
