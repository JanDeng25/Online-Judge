class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        char *itor[4][10] = {
            {"","I","II","III","IV","V","VI","VII","VIII","IX"},
            {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"","M","MM","MMM","XL","L","LX","LXX","LXXX","XC"},
        };
        res += itor[3][num / 1000 % 10];
        res += itor[2][num / 100 % 10];
        res += itor[1][num / 10 % 10];
        res += itor[0][num % 10];
        return res;
    }
};