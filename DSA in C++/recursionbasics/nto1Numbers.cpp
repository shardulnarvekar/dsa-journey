#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void printNumbers(int n){
        if(n==0){
            return;
        }
        cout<<n;
        cout<<endl;
        printNumbers(n-1);
    }
    //understand this, the numbers are being printed while the function is being stacked, not while unstacking

};
int main(){
    int x;
    cin>>x;
    Solution sol;
    sol.printNumbers(x);
}