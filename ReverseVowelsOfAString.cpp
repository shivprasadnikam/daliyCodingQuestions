


                                                            //  Reverse Vowels of a String  //


class Solution {
public:
    bool isVowel(char ch)
    {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }
    string reverseVowels(string s) {
        
        int start=0,end=s.length()-1; 

        while(start<end)
        {
            if(isVowel(s[start]) && isVowel(s[end]))
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(!isVowel(s[start]))
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return s;
    }
};
