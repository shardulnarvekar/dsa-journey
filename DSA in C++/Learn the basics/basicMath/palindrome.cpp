#include<iostream>
using namespace std;

class Solution{
    public:
    bool isPalindrome(int n){
        int reverse=0;
        int y;
        int m=n;
        while(n>0){
            y=n%10;
            reverse=reverse*10;
            reverse=reverse+y;
            n=n/10;
        }
        cout<<reverse;
        if(m==reverse){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.isPalindrome(x);
}