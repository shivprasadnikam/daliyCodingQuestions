
                                                              // Valid Perfect Square //
class Solution {
public:
    bool isPerfectSquare(int num) {
        int squareRoot=sqrt(num);
        cout<<squareRoot<<endl;
        if(squareRoot*squareRoot==num)
        return true;
        else
        return false;
    }
};
