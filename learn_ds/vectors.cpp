#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//command to execute for compiling --  clang++ -std=c++11 -stdlib=libc++ vectors.cpp
//command for compiling and renaming output file  --  clang++ -std=c++11 -stdlib=libc++ vectors.cpp -o vect.out
//command for running output file --  ./vect.out


//defining a comparator
bool f(int x,int y) {
    return x>y;
}

int main()
{
    //works
	// std::vector<int> v = { 1, 2, 3, 4, 5 };
	// copy constructor
	// std::vector<int> vec(v);

	// for (int i: vec)
	// 	std::cout << i << ' ';

    //works as well
    vector<int> v ={11,2,3,14};
    cout<<v[1]<<endl;

     sort(v.begin(),v.end()); //O(nlogn)
     bool present=binary_search(v.begin(),v.end(),3);
     cout<<present<<"\n";
    for (int i: v)
	 	cout << i << ' ';

    // v.push_back(100);
    // bool check = binary_search(v.begin(),v.end(),100);
    // cout<<"\n"<<check<<"\n";

    // v.push_back(100);
    // v.push_back(100);
    // v.push_back(100);
    // v.push_back(100);
    // v.push_back(123);

    //lowerbound on the sorted array can be done(for finding the 1st occurence of a no.)
    vector<int>::iterator it = lower_bound(v.begin(),v.end(),100); //returns 1st value >= ;in logn time 
    //without iterator can be written as 
    // auto it = lower_bound(v.begin(),v.end(),100);
    vector<int>::iterator it2 = upper_bound(v.begin(),v.end(),100); //returns 1st element which is strictly > element
    
    cout << "iterators:" << *it << "," << *it2 <<endl;

    cout<< it2-it <<endl; //4 in O(1)
    //iterators n vectors r random ,meanin arithmetic operations can be performed on them in O(1)

    // sort(v.begin(),v.end(),f);

    vector<int>::iterator it3;
    for(it3= v.begin();it3 != v.end(); it3++) {
        cout << *it3 << ' ' << endl <<'\n';
    }

    // //to access array elements by reference use & 
    // //for(int x:v) { 
    // for(int &x:v) {  //reference
    //     x++;
    //     cout<< x <<' ';
    // }

    // cout<<"updated vector"<<endl;
    // for(int x:v) {
    //     cout<< x <<' ';
    // }

	return 0;
}