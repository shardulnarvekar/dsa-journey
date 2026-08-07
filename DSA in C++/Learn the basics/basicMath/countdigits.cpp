#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution{
    public:
    void countDigit(int n){
        int count;
        count=log10(n);
        count++;
        cout<<count;
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.countDigit(x);
}