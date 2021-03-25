#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Find elements of array using XOR of consecutive elements
Given an array arr[] in which XOR of every 2 consecutive elements of the original array is given i.e if the total number of elements in the original array is n then the size of this XOR array would be n-1. The first element in the original array is also given. The task is to find out the rest of n-1 elements of the original array.

Let a, b, c, d, e, f are the original elements and the xor of every 2 consecutive elements is given, i.e a^b = k1, b ^ c = k2, c ^ d = k3, d ^ e = k4, e ^ f = k5 (where k1, k2, k3, k4, k5 are the elements that are given as along with the first element a), and we have to find the value of b, c, d, e, f.


Input : arr[] = {13, 2, 6, 1}, a = 5
Output : 5 8 10 12 13
 */
class Solution {
public:
    vector<int> xorOperation(vector<int>& nums, int start) {
        vector<int> v;
        v.push_back(start);
        int i;
        for(i=0;i<nums.size();i++) {
            v.push_back(v[i]^nums[i]);
        }
        return v;
    }
};

int main() {
    Solution obj1;
    vector<int> v = {12, 5, 26, 7};
    vector<int>::iterator it;
    int start = 6;
cout<<"---\n";
        vector<int> xored = obj1.xorOperation(v,start);
        for(it= xored.begin();it != xored.end(); it++) {
        cout<<*it<<" ";
        }

    return 0; 
}