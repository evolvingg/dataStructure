#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> threeSum(vector<int> &arr, int target) {
    sort(arr.begin(),arr.end());
    vector<int> sum;
    sum.clear();
    vector<int>::iterator first,second,third;
    for(first=arr.begin();first!=arr.end()-2;first++) {
        second = first+1;
        third = arr.end()-1;
        while(second<third) {
            if(*first + *second + *third == target) {
                sum.push_back(*first);
                sum.push_back(*second);
                sum.push_back(*third);
                return sum;
            }
            else if(*first + *second + *third < target) {
                second++;
            }
            else {
                third--;
            }
        }
    }
    return sum;
}

int main(void) {
    int target,val;
    vector<int> elem;
    vector<int> originalArray;
    cout<<"Enter vector else 50000 to quit\n";
    originalArray.clear();
    elem.clear();
    vector<int>::iterator it;
    while(val != 50000) {
        cin >> val;
        originalArray.push_back(val);
    }
    // v = {1,2,3,4,5,7};
    cout<<"Enter target\n";
    cin>>target;
    elem = threeSum(originalArray,target);
    if(!elem.size()) {
        cout<<"no elements with given sum"<<endl;
    }
    else {
      for(it= elem.begin();it != elem.end(); it++) {
        cout<< *it <<" ";
      }
    }
    return 0;
}