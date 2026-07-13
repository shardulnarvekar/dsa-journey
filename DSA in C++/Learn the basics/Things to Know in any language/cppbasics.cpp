// What are arrays, strings?
// linear data structure, store data, perform any operation, randomly access data using index values
// homogeneous elements
// index value starts from 0 -> 0 based indexing (arrays, strings)
// arrays store numbers, strings, boolean values, objects, etc.
// Syntax : Data_type  array_name  [Array_size] ;
// int num[4];
// after defining, memory is immediately allocated
// to find something, if we know where the element is located we can use index values to access it
// If we dont know where it is located, we use search algorithm, linear serch, binary search, etc
// If we want faster and repeated lookups, we store the elements of the array in an hash-based data structure (hash set, hash map)


// strings
// series of characters stored in specific order, index starting from 0, 

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s[4];
    cout<<s.length();
    cout<<s.size();

}

// #include<iostream>
// using namespace std;
// int main(){
//     int x[3];
//     cin>>x[0];
//     cin>>x[1];
//     cin>>x[2];
//     cout<<x;
// }

//stings can be passed as an argument to a function, we are are making a fresh copy of the string, so, whatever we do to the string inside the function, the string outside wont be affected.


//== operator, return true if both sides equal
//!= operator, return ture if both sides not equal