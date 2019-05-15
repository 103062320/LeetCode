/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
class Solution {
public:
    int reverse(int x) {
		// My method, not good
		bool neg = false;
		if(x < 0){
			neg = true;
		}
		stringstream ss;
		ss << x;
		string str = ss.str();
		std::reverse(str.begin(), str.end());
		int y;
		try{
			// seems this will ignore the '-' at the end
			y = std::stoi(str);
		}
		catch(exception e){
			return 0;
		}
		if(neg) y *= -1;
		return y;

		// Reference : GitHub tim70036
		/*
			long reverse=0;
			while(x) {
				reverse = reverse * 10 + x % 10;
				x = x / 10;
			}
			return ((reverse > INT32_MAX || reverse < INT32_MIN) ? 0 : reverse);
		*/
    }
};

