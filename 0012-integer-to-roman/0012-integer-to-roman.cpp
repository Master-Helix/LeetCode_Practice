class Solution {
public:
    string intToRoman(int num) {
         
       string romans[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int nums[]      = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string result = "";
        int myNum = num;
        int i = 12;
        for(i=12; i>=0; i--)
        {
            while(myNum>=nums[i])
            {
                result +=romans[i];
                myNum -= nums[i];
            }
        }
        return result;
    }
};