#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//     void printNumbers(int n,int k){
//         if(k>n){
//             return;
//         }
//         cout<<k;
//         cout<<endl;
//         printNumbers(n,k+1);
//     }
// };


class Solution{
    public:
    void printNumbers(int n){
        if(n==0){
            return;
        }
        printNumbers(n-1);
        cout<<n;
        cout<<endl;
    }
};
//understand this, the numbers are being printed while the function is being unstacked, not while stacking


//the key is where you cout, in recursion, it always stacks, so it follows the first in last out principle, FILO

int main(){
    int x;
    cin>>x;
    Solution sol;
    sol.printNumbers(x);
}