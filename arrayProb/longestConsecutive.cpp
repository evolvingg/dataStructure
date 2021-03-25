#include <iostream>
#include <vector>
#include <algorithm>
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
    int longestConsecutive(vector<int>& nums) {
        int c=1,max=1;
        for(int i= 0;i<nums.size()-1;i++) {
            if(nums[i] * nums[i+1]<0) {
                c = c + 1;
                if(c>max) {
                max=c;
                }
            }
            else {
                c = 1;
            }
        }
        return max;
    }
//using DP
    vector<int> vectorConsecutiveAtIndex(vector<int>& nums) {
        vector<int> output;
        output.push_back(1);
        int j=0;
        for(int i= nums.size()-2;i>=0;i--) {
            if(nums[i] * nums[i+1]<0) {
                output.push_back(output[j] + 1);
            }
            else {
                output.push_back(1);
            }
            j++;
        }
        reverse(output.begin(),output.end());
        return output;
    }
};

int main() {
    Solution obj1;
    vector<int>::iterator it;
    //this works with clang command
    vector<int> v = {-5, -1, -1, 2, -2, -3,8,-9,7,-6};

    // v.push_back(11);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(14);
    int num = obj1.longestConsecutive(v);
    cout<<"Longest:"<<num<<"   \n";
    vector<int> result=obj1.vectorConsecutiveAtIndex(v);

    vector<int>::iterator it3;

    for(it=result.begin();it!=result.end();it++){
        cout<<"Result---"<<*it<<" \n";
    }

    return 0; 
}