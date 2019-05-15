/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sortNum(nums);
		sort(sortNum.begin(), sortNum.end());

		int left = 0, right = sortNum.size() - 1;
		while(left < right){
			while(sortNum[right] > target - sortNum[left]) right--;
			while(sortNum[left] < target - sortNum[right]) left++;

			if(sortNum[right] + sortNum[left] == target) break;
		}

		vector<int> ans;
		for(int x=0; ans.size()<2 && x<nums.size(); x++){
			if(nums[x] == sortNum[left] || nums[x] == sortNum[right])
				ans.push_back(x);
		}
		return ans;
    }
};

