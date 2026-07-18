// Its basically how we pass data to functions, we either pass a copy or the actual data.

// Pass by Value: We pass a copy (Changes inside the function don’t affect the original variable)
// Pass by reference: Function receives the actual variable. (Changes inside the function affect the original

// Simple syntax in C++. We use & in the function calling the variable

// A vector is simply a variable that stores many integers instead of one.
// Why is there <int>?
// Because a vector can store many different kinds of things.

// vector<int> arr = {1,2,3,4,5};

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int>nums;
    int left, right;
    void reverse(vector<int>& arr){
        nums=arr;
        left = 0;
        int c;
        right = arr.size()-1;
        while (right > left){
            c = arr[left];
            arr[left] = arr[right];
            arr[right] = c;
            left++;
            right--;
        };
    };
};

int main(){
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    sol.reverse(arr);
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i];
}



// vector arrays, are basically smart arrays, its a c++ vector
// It has built-in functions:

// arr.size();
// arr.push_back(6);
// arr.pop_back();




// int arr[5] = {1,2,3,4,5};

// cout << arr.size();   // ❌ ERROR



// Thus we use c++ vector to store an array


// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution{
//     public:
//     vector<int>nums;
//     int left, right;
//     void reverse(vector<int>& arr){
//         nums=arr;
//         left = 0;
//         int c;
//         right = arr.size()-1;
//         while (right > left){
//             c = arr[left];
//             arr[left] = arr[right];
//             arr[right] = c;
//             left++;
//             right--;
//         };
//     };
// };

// int main(){
//     Solution sol;
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements:\n";

// for (int i = 0; i < n; i++) {
//     cin >> arr[i];
// }
//     sol.reverse(arr);
//     for(int i=0; i<arr.size(); i++)
//         cout<<arr[i];
// }