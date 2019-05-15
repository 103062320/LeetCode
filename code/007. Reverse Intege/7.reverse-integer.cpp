/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */
class Solution {
public:
    int reverse(int x) {
		bool neg = false;
		if(x < -1 * pow(2,31) || x > pow(2,31)-1) return 0;
		if(x < 0){
			neg = true;
		}
        stringstream ss;
		ss << x;
		string str = ss.str();
		std::reverse(str.begin(), str.end());
		int y;
		try{
			y = std::stoi(str);
		}
		catch(exception e){
			return 0;
		}
		if(neg) y *= -1;
		return y;
    }
};

