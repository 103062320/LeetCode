/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
class Solution {
public:
    int romanToInt(string s) {
        int ans=0, length = s.length();
		map<char, int> mymap;
		mymap['I'] = 1;
		mymap['V'] = 5;
		mymap['X'] = 10;
		mymap['L'] = 50;
		mymap['C'] = 100;
		mymap['D'] = 500;
		mymap['M'] = 1000;

		// intuitional, but make code dirty
		/*
		for(int i=0; i< length; i++){
			if(s[i] == 'I'){
				if(i+1 < length){
					if(s[i+1] == 'V') {
						i++;
						ans += 4;
					}
					else if (s[i+1] == 'X') {
						i++;
						ans += 9;
					}
					else {
						ans += mymap[s[i]];
					}
				}
				else {
					ans += mymap[s[i]];
				}
				
			}
			else if (s[i] == 'X') {
				if(i+1 < length){
					if(s[i+1] == 'L') {
						i++;
						ans += 40;
					}
					else if (s[i+1] == 'C') {
						i++;
						ans += 90;
					}
					else {
						ans += mymap[s[i]];
					}
				}
				else {
					ans += mymap[s[i]];
				}
			}
			else if (s[i] == 'C') {
				if(i+1 < length) {
					if(s[i+1] == 'D') {
						i++;
						ans += 400;
					}
					else if (s[i+1] == 'M') {
						i++;
						ans += 900;
					}
					else {
						ans += mymap[s[i]];
					}
				}
				else {
					ans += mymap[s[i]];
				}
			}
			else {
				ans += mymap[s[i]];
			}
		}
		*/

		// better to parse from the end
		ans += mymap[s[length-1]];
		for(int i=length-2; i>=0; i--){
			if( mymap[s[i+1]] > mymap[s[i]])
				ans -= mymap[s[i]];
			else
				ans += mymap[s[i]];
		}

		return ans;
    }
};

