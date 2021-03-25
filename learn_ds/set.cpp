#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

//command to execute for compiling --  clang++ -std=c++11 -stdlib=libc++ vectors.cpp
//command for compiling and renaming output file  --  clang++ -std=c++11 -stdlib=libc++ vectors.cpp -o vect.out
//command for running output file --  ./vect.out


int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);
s.insert(-10);
 //sets arrange themselves in ascending order
 //no sort operation is required ,at any time  collection is sorted
 //insertion operation takes place in O(log n) time
    for(int x: s) {
        cout << x << " ";
    }

    auto it = s.find(20);
    cout << endl << *it;

    if(it == s.end()) {
        cout << "not present" << endl;
    }
    else {
        cout << "present";
    }

    auto it2 = s.lower_bound(-1); //iterator to element  > = given no.
    auto it3 = s.upper_bound(0); //iterator to element strictly  >  given no.
    cout << *it2 << ' ' <<*it3 <<endl; 
    auto it4 = s.upper_bound(2);

    if(it4 == s.end()) {
        cout << " oops doesnot exist " << endl;
    }

    cout << endl;

    set <pair <int,char> > s;
    s.insert({401,450});
    s.insert({10,20});
    s.insert({2,3});
    s.insert({30,400});

	return 0;
}