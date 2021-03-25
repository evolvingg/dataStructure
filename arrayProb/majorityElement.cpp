#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int majorityElement(vector <int> &arr) {
    unordered_map<int,int> count ;
    count.clear();
    int threshold = (int)(arr.size()/2);
    for(int i=0;i<arr.size();i++) {
        if(count.find(arr[i])!=count.end()) {
          count[arr[i]]=count[arr[i]]+1;
          if(count[arr[i]]>threshold) {
              return arr[i];
          }
        }
        else {
           count[arr[i]]=1; 
        }
    }
    return -1;
}

int main() {
    vector<int> givenArray = {1,34,8,8,8,8,90,8,8,8,90,90,8,8};
    int majority= majorityElement(givenArray);
    if(majority<0) {
        cout<<"NO elemnt has majority";
    }
    else {
        cout<<majority;
    }
    return 0;
}