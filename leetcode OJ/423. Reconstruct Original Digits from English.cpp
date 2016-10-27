class Solution {
public:
	string originalDigits(string s) {
		string res = "";
		int num[256] = { 0 };
		for (int i = 0; i < s.length(); i++) {
			num[s[i]] ++;
		}
		//0
		num[0] = num['z'];
		num['e'] -= num[0];
		num['r'] -= num[0];
		num['o'] -= num[0];

		//2
		num[2] = num['w'];
		num['t'] -= num[2];
		num['o'] -= num[2];

		//4
		num[4] = num['u'];
		num['f'] -= num[4];
		num['o'] -= num[4];
		num['r'] -= num[4];

		//5
		num[5] = num['f'];
		num['i'] -= num[5];
		num['v'] -= num[5];
		num['e'] -= num[5];

		//6
		num[6] = num['x'];
		num['s'] -= num[6];
		num['i'] -= num[6];

		//7
		num[7] = num['s'];
		num['e'] -= 2 * num[7];
		num['v'] -= num[7];
		num['n'] -= num[7];

		//8
		num[8] = num['g'];
		num['e'] -= num[8];
		num['i'] -= num[8];
		num['h'] -= num[8];

		//3
		num[3] = num['h'];

		//1
		num[1] = num['o'];

		num[9] = num['i'];

		for (char i = '0'; i <= '9'; i++) {
			for (int j = 0; j < num[i - '0']; j++)
				res += i;
		}
		return res;
	}
};