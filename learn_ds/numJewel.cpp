#include <iostream>
#include <map>

using namespace std;


/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0 
*/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> cmap;
        int i=0,c=0;
        for(i=0;i<S.length();i++) {
            cmap[S[i]]++;
        }
        for(i=0;i<J.length();i++) {
            if(cmap.find(J[i])!=cmap.end()) {
                c=c+cmap[J[i]];
            }
        }
        return c;
    }
};

int main() { 

    Solution obj1; 
    string J;
    string S;

    J = "aA";
    S = "aAAbbbb";

    cout<<obj1.numJewelsInStones(J,S) << "\n"; 
    return 0; 
}