// STL in CPP


//Standard Template Library (STL)

//pre-defined templates in terms of containers and classes which makes it very easy for developers or programmers to implement different data structures easily without having to write complete code and worry about space-time complexities.

// unordered_set in C++ STL
// Vector in C++ STL
// Set in C++ STL
// unordered_multiset in C++ STL
// multiset in C++ STL
// unordered_map in C++ STL
// map in C++ STL
// unordered_multimap in C++ STL
// queue in C++ STL
// stack in C++ STL
// deque in C++ STL
// priority_queue in C++ STL
// multimap in C++ STL
// list in C++ STL
// next_permutation in STL
// __builtin_popcount() in STL
// sort() in C++ STL
// min_element() in C++ STL
// max_element() in C++ STL

// above mentioned STL are the most commonly used STL


#include<iostream>
using namespace std;

int main(){
    int x[]={1,2,3,4,5,6};
    x[5]=8;
    for(int i=0; i<6; i++){
        cout<<x[i];
    }
    x[6]=9;
    cout<<x[6];
}

// the above code doesnt work in java, as when the array is defined, it size is fixed.