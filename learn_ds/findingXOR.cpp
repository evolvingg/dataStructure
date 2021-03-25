#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Given an integer n and an integer start.
Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.
Return the bitwise XOR of all elements of nums.

Example 1:
Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
 */
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v;
        int i,ret=0;
        for(i=0;i<n;i++) {
            v.push_back(start + 2*i);
            ret=ret^v[i];
        }
        return ret;
    }
};

int main() {
    Solution obj1;
    cout<<obj1.xorOperation(10,5)<<" ";
    return 0; 
}