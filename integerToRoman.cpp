

                                                              // Integer to Roman  //


class Solution {
public:
    string intToRoman(int num) {

        /*
            matching of numeric element to roman
            
            1) 1000 -- "M"
            2) 900  -- "CM"
            3) 500  -- "D"
            4) 400  -- "CD"
            5) 100  -- "C"
            6) 90   -- "XC"
            7) 50   -- "L"
            8) 40   -- "XL"
            9) 10   -- "X"
            10) 9   -- "IX"
            11) 5   -- "V"
            12) 4   -- "IV"
            13) 1   -- "I"


        */
        
        int numeric [] = {1000 ,900, 500, 400, 100, 90, 50,  40, 10,   9,  5,  4,   1};
        string roman [] = {"M", "CM","D", "CD","C","XC","L","XL","X","IX","V","IV","I"};
        string conversion="";
        //traversing through  both array
        for(int i=0; i<13; i++)
        {
                //compare num with numeric array then match with roman
                while(num>=numeric[i])
                {
                    conversion.append(roman[i]);
                    //shortning number by appending roman
                    num-=numeric[i];
                }
        }
        return conversion;
    }
};
