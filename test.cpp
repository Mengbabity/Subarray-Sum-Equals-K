class Solution {
public:
	int subarraySum(vector<int> nums, int k) {
		int sum = 0; 
		map<int, int> m; 
		int res = 0; 
		m[0]++; 
		for (int i = 0; i<nums.size(); i++) {
			sum += nums[i];
			res += m[sum - k];
			m[sum]++;
		}
		return res;
	}
};
