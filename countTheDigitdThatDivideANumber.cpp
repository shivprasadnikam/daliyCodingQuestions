

                                                                      // Count the Digits That Divide a Number  //
                                                                      
                                                                      
 class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int rev=num;
        while(rev)
        {
            int rem=rev%10;
            if(num%rem==0)
            count++;
            //int rev=num;
            rev/=10;
        }
        return count;
    }
};
