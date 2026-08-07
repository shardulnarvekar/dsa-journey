#include<iostream>
using namespace std;

class Solution{
    public:
    int reverseNumber(int n){
        int reverse=0;
        int y;
        while(n>0){
            y=n%10;
            reverse=reverse*10;
            reverse=reverse+y;
            n=n/10;
        }
        cout<<reverse;
        return reverse;
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.reverseNumber(x);
}