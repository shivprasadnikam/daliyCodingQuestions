
                                                        //  Categorize Box According to Criteria  //


class Solution {
public:
    string categorizeBox(long long length, long long width, long long height, long long mass) {
        string ans="";
        unsigned long int volume=length*width*height;
        if((length>=10000 || width>=10000 || height>=10000 || mass>=10000 || volume>=pow(10,9)) && mass>=100)
        {
            
            ans="Both";
        }
        else if((length>=10000 || width>=10000 || height>=10000 || mass>=10000 || volume>=1000000000))
        ans="Bulky";
        else if(mass>=100)
        ans="Heavy";
        else
        ans="Neither";
        
        return ans;
    }
};
