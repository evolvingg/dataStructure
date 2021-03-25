#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
Longest alternating (positive and negative) subarray starting at every index.A subarray is called alternating if any two consecutive numbers in it have opposite signs (i.e. one of them should be negative, whereas the other should be positive).
Given an array of n integers. For each index i, we need to find the length if the longest alternating subarray starting at i.

using DP for finding consecutive no.s at each index

Example:
Input : a[] = {1, -5, 1, -5}
Output : For index 0, {1, -5, 1, -5} = 4
             index 1, {-5, 1, -5} = 3
             index 2, {1, -5} = 2
             index 3, {-5} = 1.

Input :a[] = {-5, -1, -1, 2, -2, -3}
Output : index 0 = 1,
         index 1 = 1,
         index 2 = 3,
         index 3 = 2,
         index 4 = 1,
         index 5 = 1,
 */
class Solution {
public:
    bool checkSegments(vector<int>& nums,int x,int k) {
        int i,s,j;
        s = ceil(nums.size()/(x*1.0));
        for(i= 0;i<nums.size();i=i+x) {
            for(j=0;j<x&&(i+j)<nums.size();j++) {
                if(nums[i+j]==k)
                {
                    s=s-1;
                    break;
                }
            }
        }
        return !s?true:false;
    }
};

int main() {
    Solution obj1;
    vector<int>::iterator it;
    //this works with clang command
    vector<int> v = {5, 8, 7, 12, 14, 3, 9};
    bool num = obj1.checkSegments(v,2,8);
    if(obj1.checkSegments(v,5,23))
    cout<<"yes   \n";
    else
    {
        cout<<"false\n";
    }
    return 0; 
}