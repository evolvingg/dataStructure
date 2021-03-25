#include <iostream>
#include <vector>
#include <unordered_map>

#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
	unordered_map<int, int> hash;
	vector<int> result;
    result.clear();
    hash.clear();
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];
		if (hash.find(numberToFind) != hash.end()) {
			result.push_back(hash[numberToFind]);
			result.push_back(i);			
			return result;
		}
		hash[numbers[i]] = i;
	}
	return result;
}

vector<int> twoSumVaues(vector<int> &numbers, int target)
{
	unordered_map<int, int> hash;
	vector<int> result;
    result.clear();
    hash.clear();
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];
		if (hash.find(numberToFind) != hash.end()) {
			result.push_back(numberToFind);
			result.push_back(numbers[i]);			
			return result;
		}
		hash[numbers[i]] = i;
	}
	return result;
}

int countOfPairs(vector<int> &numbers, int target)
{
	unordered_map<int, int> hash;
    hash.clear();
    int c=0;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];
		if (hash.find(numberToFind) != hash.end()) {
          c++;
		}
        else {
		  hash[numbers[i]] = i;
        }
	}
	return c;
}

int main(void) {
    int target,val;
    vector<int> g,v,index;
    cout<<"Enter vector else 50000 to quit\n";
    v.clear();
    g.clear();
    index.clear();
    vector<int>::iterator it3;
    while(val != 50000) {
        cin >> val;
        v.push_back(val);
    }

    // v = {1,2,3,4,5,7};
    cout<<"Enter target\n";
    cin>>target;
    g = twoSum(v,target);
    index = twoSumVaues(v,target);
    int c= countOfPairs(v,target);
    
    cout<< "\nindex: ";
    for(it3= g.begin();it3 != g.end(); it3++) {
        cout<< *it3 <<" ";
    }

    cout<< "\nvalue: ";

    for(it3= index.begin();it3 != index.end(); it3++) {
        cout<< *it3 <<" ";
    }
    cout<<"\ncount:"<<c<<"\n";
    return 0;
}
