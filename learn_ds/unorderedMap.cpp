#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

    unordered_map <string, int> umap;
    umap["Geeks"] = 10;
    umap["Prac"] = 20;
    umap["Contr"] = 30;
    for(auto x:umap) {
        cout << x.first << "  " << x.second << endl;
    }
}