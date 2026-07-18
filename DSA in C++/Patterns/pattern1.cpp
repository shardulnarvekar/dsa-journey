#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            cout<<"*";
        };
        cout<<endl;
    };
    };
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    sol.pattern1(n);
}

// You did this first try, without any errors
