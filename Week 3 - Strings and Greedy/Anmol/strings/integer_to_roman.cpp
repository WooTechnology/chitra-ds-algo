class Solution {
public:
    string intToRoman(int num) {
        string roman[] = {"I", "IV", "V", "IX" ,"X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int value[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string res;
        for(int i = 12; num > 0 && i>=0; i--){
            while(num >= value[i]){
              num -= value[i];
              res += roman[i];
            }
        }
        return res;
    }
};