#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4]
 */
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    vector<int>::iterator it;
    int s=0;
    vector<int> runSum;
    for(it= nums.begin();it != nums.end(); it++) {
        s=s+ *it;
        runSum.push_back(s);
        }
    return runSum;
    }
};

int main() {
    Solution obj1;
    vector<int>::iterator it;
    //this works with clang command
    vector<int> v = {11,2,3,14} ;

    // v.push_back(11);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(14);
    vector<int> sum = obj1.runningSum(v);
        for(it= sum.begin();it != sum.end(); it++) {
        cout<<*it<<" ";
        }
    return 0; 
}