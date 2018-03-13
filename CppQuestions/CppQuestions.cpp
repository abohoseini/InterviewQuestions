// CppQuestions.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Utils.h"

//TwoSum, Source: leetCode.com
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return[0, 1].
vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> result(2);
	map<int, int> myMap;

	for (int i = 0; i < nums.size(); i++)
	{
		myMap[nums[i]] = i;
	}

	for (int j = 0; j < nums.size(); j++)
	{
		int complement = target - nums[j];

		auto iter = myMap.find(complement);
		if (iter != myMap.end() && iter->second != j)
		{
			result[0] = j;
			result[1] = iter->second;
		}
	}
	return result;
}

int main()
{
	// test twoSum
	vector<int> nums = {2, 7, 11, 15};
	Utils::PrintVector(twoSum(nums, 9));

	// Kepp console waiting
	int i;
	cin >> i; 
    return 0;
}

