/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		// using dp
		std::map<char, int> mymap;
		std::map<char, int>::iterator it;
        int maxlength = 0, curlength = 0;
		vector<int> dp;
		for(int i=0; i < s.length(); i++){
			if(i==0){
				dp.push_back(1);
			}
			else {
				it = mymap.find(s[i]);
				if(it == mymap.end()){
					dp.push_back(dp[i-1] + 1);
				}
				else{
					int dist = i - mymap[s[i]];
					if(dist > dp[i-1]) dp.push_back(dp[i-1] + 1);
					else dp.push_back(dist);
				}
			}
			mymap[s[i]] = i;
			if(maxlength < dp[i]) maxlength = dp[i];
		}
		return maxlength;

		// 
    }
};

