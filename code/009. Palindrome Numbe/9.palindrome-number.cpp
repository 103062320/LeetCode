/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
class Solution {
public:
    bool isPalindrome(int x) {
		// special case 0
		/*
			if(x == 0) return true;

			if(x < 0 || x % 10 == 0){
				return false;
			}
			else {
				long origin = x, reverse=0;
				while(origin) {
					reverse = reverse * 10 + origin % 10;
					origin /= 10;
				}
				if(reverse == x) return true;
				else return false;
			}
		*/
		// shorter code
		long origin = x, reverse = 0;
		while(origin > 0){
			reverse = reverse * 10 + origin % 10;
			origin /= 10;
		}
		return x == reverse;

    }
};

