#include <iostream>
#include bits std c++
using namespace std;

int main() {
    vector <vector <int> > a;
    for(int i=0;i<a.size;i++) {
        for(int j=0;j<a.size;j++) {
            cin>>a[i][j];
        }
    }

    vector <int> v;
    vector <int> s;
    for(int i=0;i<v.size();i++)
        {
        cin>>v[i];
        s.push_back(v[i]);
        }
    cout<<"vector of vectors";
    for(int i=0;i<a.size;i++) {
        for(int j=0; j<a.size;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


