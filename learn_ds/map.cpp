#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    map<int,int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[1000002] = 1;
    
    for(int c=1; A[c]&&c<A.size(); c++) {
        A[c]++;
        cout<<A[c]<<"   "<<c<< "  ";
    }

    map<char,int> cnt;
    string x = "tanvi singh";
    for(char c:x) {
        cnt[c]++;
    }

    cout<< cnt['a'] << " times " << cnt['z'] << endl;
    return 0;
}