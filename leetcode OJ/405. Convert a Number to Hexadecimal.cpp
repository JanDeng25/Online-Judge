class Solution {
public:
    string toHex(int num) {
        if(num == 0)
            return "0";
		string ans = "";
		int bit = 8;
		while (num && bit) {
			int tmp = num & 15;
			if (tmp < 10)
				ans = to_string(tmp) + ans;
			else
				ans = (char)('a' + tmp - 10) + ans;
			num = num >> 4;
			bit--;
		}
		return ans;
    }
};