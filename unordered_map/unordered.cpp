// unordered_map find in C++ STL
// find function in C++ is used to search for a specific key in an unordered map.

// Syntax

// unordered_map.find(key);
// Parameters: It takes the key as a parameter.

// Return values: If the given key exists in unordered_map it returns an iterator to that element otherwise it returns the end of the map iterator.

// Output:
// Element Not Present
// Element Present

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std; 
  
int main() 
{ 
    unordered_map<int, bool> um; 
  
   um[12] = true; 
    //um[6789] = false; 
    um[456] = true; 
  
    // Searching for element 23 
    if (um.find(23) == um.end()) 
        cout << "Element Not Present\n"; 
    else
        cout << "Element Present\n"; 
  
    // Searching for element 456 
    if (um.find(456) == um.end()) 
        cout << "Element Not Present\n"; 
    else
        cout << "Element Present\n"; 
  
    return 0; 
} 
