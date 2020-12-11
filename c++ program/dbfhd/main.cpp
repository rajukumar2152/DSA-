#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> vov;
		if (nums.empty())
			return vov;
		sort(nums.begin() , nums.end());
		int n = nums.size();
		int low , end ;
		for (int i = 0 ; i < n; i++) {
			for (int j = i + 1 ; j < n ; j++) {
				target2 = target - nums[i] - nums[j];
				low = j + 1;
				end = n - 1;
				while (low < end) {
					if (nums[low] + nums[end] < target2)low++;
					else if (nums[low] + nums[end] > target2)end--;
					else {
						vector<int>dummy(4 , 0); // ek dummy vector 
						dummy[0] = nums[i];     // le liya aur usko vov 
						dummy[1] = nums[j];  
						dummy[2] = nums[low];
						dummy[3] = nums[end];
						vov.push_back(dummy);
						//here while loop iss usned to remove the dublicates
						while (low < end && nums[low] == dummy[2])low++;
						while (low < end && nums[end] == dummy[3])low--;

					}

				}
				// yaha j wala  dublicate na aye 
				while (j + 1 < n && nums[j + 1] == nums[j]) ++j;
			}//yyaha i wala dublicate na aye . 
			while (i + 1 < n && nums[i + 1] == nums[i])++i;
		}
		return vov;
	}
};