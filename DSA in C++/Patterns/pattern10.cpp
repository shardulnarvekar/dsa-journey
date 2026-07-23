#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i=0; i<n; i++){
            for(int j=0 ; j<i+1; j++){
                cout<<"*";
            }
        cout<<endl;
        }

    }
    void pattern2(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1-i; j++){
                cout<<"*";
            }
        cout<<endl;
        }
    }
    void pattern10(int n){
        pattern1(n);
        pattern2(n);
    }
};

int main(){
    Solution sol;
    int x;
    cin>>x;
    sol.pattern10(x);
}

//completely solved on my ownnnn