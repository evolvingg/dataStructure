#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Longest alternating subsequence in terms of positive and negative integers. Given an array arr[] of positive and negative numbers only. The task is to find the length of the longest alternating (means negative-positive-negative or positive-negative-positive) subsequence present in the array.

Example:
Input: arr[] = {-4, 3, -5, 9, 10, 12, 2, -1}
Output: 5
Explanation:
The longest sequence is {-4, 3, -5, 9, -1} which of length 5. There can be many more subsequence of this length.

Input: arr[] = {10, 12, 2, -1}
Output: 2
Explanation:
The longest sequence is {10, -1} which is 2.
 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int c=1;
    for(int i= 0;i<nums.size()-1;i++) {
        if(nums[i] * nums[i+1]<0) {
            c = c + 1;
        }
    }
    return c;
    }
};

int main() {
    Solution obj1;
    vector<int>::iterator it;
    //this works with clang command
    vector<int> v = {-4, 3, -5, 9, 10, 12, 2, -1};

    // v.push_back(11);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(14);
    int num = obj1.longestConsecutive(v);
    cout<<"Longest:"<<num<<"   ";
    return 0; 
}